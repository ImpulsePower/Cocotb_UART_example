#!/bin/bash
# chmod +x listen_port.sh

for port in {5000..6000}; do
  if ! sudo lsof -i :$port > /dev/null; then
    echo "Port $port is free"
  fi
done