cmake_minimum_required(VERSION 3.22)

project(CppAtm VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(MENU_LIB menu_lib)
set(BALANCE_LIB balance_lib)
set(DEPOSIT_LIB deposit_lib)
set(EXECUTABLE_NAME ATM)

add_subdirectory(src)
add_subdirectory(app)