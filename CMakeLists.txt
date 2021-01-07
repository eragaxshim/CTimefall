cmake_minimum_required(VERSION 3.17)
project(CTimefall)

set(CMAKE_CXX_STANDARD 20)
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/Program Files/SFML/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML COMPONENTS graphics window system)

add_executable(CTimefall src/Timefall.cpp src/Timefall.h src/IState.cpp src/IState.h)
target_link_libraries(CTimefall sfml-graphics sfml-audio)