# PowerShell helper (run as admin)
# This script prints guidance. For full automation, install Chocolatey first.
Write-Host "Ensure you have Visual Studio Build Tools and CMake installed."
Write-Host "Then run:"
Write-Host "cmake -S . -B build -DCMAKE_BUILD_TYPE=Release"
Write-Host "cmake --build build --config Release"
Write-Host ".\build\Release\pigfarm_cli.exe"
