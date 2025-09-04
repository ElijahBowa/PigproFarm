# PigFarm App Toolchain Setup

## Target Platforms
- Windows, Linux, macOS (desktop-first)
- Future: Android

## Required Tools
- Compiler: MSVC (Win), GCC/Clang (Linux), Apple Clang (macOS)
- CMake
- Qt (UI)
- SQLite3 (database)

## Quick Start (Linux)
```bash
sudo apt update
sudo apt install -y build-essential cmake qtbase5-dev sqlite3 libsqlite3-dev
git clone https://github.com/yourusername/pigfarm-app.git
cd pigfarm-app
mkdir build && cd build
cmake ..
make
./PigFarmApp
```
