
# Toolchain & Platforms

## Supported (MVP)
- Windows 10+
- Ubuntu 20.04+ desktop
- macOS 12+

## Build tools
- CMake >= 3.16
- C++17 compiler (MSVC, GCC, or Clang)

## Install tips
- Ubuntu: `sudo apt update && sudo apt install -y build-essential cmake`
- macOS: `xcode-select --install` and `brew install cmake`
- Windows: Install Visual Studio Build Tools and CMake; ensure both are in PATH.

## Next phases
- GUI: Qt 6.x
- DB: SQLite3 (single-file local DB)
