#!/usr/bin/env bash
set -e
echo "Installing build tools on Debian/Ubuntu..."
sudo apt update
sudo apt install -y build-essential cmake
echo "Done. Build with: cmake -S . -B build && cmake --build build"
