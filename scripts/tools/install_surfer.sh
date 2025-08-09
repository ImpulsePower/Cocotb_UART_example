#!/bin/bash
# chmod +x install_surfer.sh

# Surfer installer script for Fedora/DNF and Ubuntu/APT systems
set -e

# Check if we're running as root
if [ "$(id -u)" -ne 0 ]; then
    echo "Please run this script as root or with sudo."
    exit 1
fi

# Detect distribution and install dependencies
if [ -f /etc/fedora-release ]; then
    echo "Detected Fedora-based system. Installing dependencies with DNF..."
    dnf install -y git cmake gcc-c++ make qt5-qtbase-devel qt5-qtdeclarative-devel \
        qt5-qtsvg-devel qt5-qtquickcontrols2-devel qt5-qtgraphicaleffects \
        qt5-qtmultimedia-devel qt5-qttools-devel
    
elif [ -f /etc/lsb-release ] || [ -f /etc/debian_version ]; then
    echo "Detected Ubuntu/Debian-based system. Installing dependencies with APT..."
    apt-get update
    apt-get install -y git cmake g++ make qtbase5-dev qtdeclarative5-dev \
        qtsvg5-dev qtquickcontrols2-5-dev qml-module-qtgraphicaleffects \
        qtmultimedia5-dev qttools5-dev
    
else
    echo "Unsupported distribution. Only Fedora and Ubuntu/Debian are supported."
    exit 1
fi

# Clone Surfer repository
echo "Cloning Surfer repository from GitLab..."
git clone https://gitlab.com/surfer-project/surfer.git /tmp/surfer
cd /tmp/surfer

# Create build directory
mkdir build
cd build

# Build and install
echo "Building and installing Surfer..."
cmake -DCMAKE_INSTALL_PREFIX=/usr ..
make -j$(nproc)
make install

# Cleanup
echo "Cleaning up..."
rm -rf /tmp/surfer

echo "Surfer has been successfully installed!"