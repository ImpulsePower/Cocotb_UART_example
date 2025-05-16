import asyncio
from collections import deque

class AsyncLogQueue:
    def __init__(self):
        self._queue = deque()
        self._event = asyncio.Event()
        self._max_size = 1000

    async def put(self, message: str, **kwargs):
        """Асинхронное добавление лога"""
        while len(self._queue) >= self._max_size:
            await asyncio.sleep(0.1)
        
        self._queue.append({
            'message': message,
            **kwargs
        })
        self._event.set()

    async def process(self):
        """Фоновая обработка логов"""
        while True:
            await self._event.wait()
            while self._queue:
                entry = self._queue.popleft()
                await self._write_log(entry)
            self._event.clear()

    async def _write_log(self, entry):
        """Асинхронная запись лога"""
        # Реализация записи в файл/БД/внешний сервис
        pass
    