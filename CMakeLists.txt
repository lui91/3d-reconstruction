cmake_minimum_required (VERSION 3.8)
project(3d-reconstruction)

find_package(Torch REQUIRED PATHS /home/luis/libtorch)
find_package(Threads REQUIRED)

add_executable (3d-reconstruction main.cpp)
target_link_libraries(3d-reconstruction "${TORCH_LIBRARIES}")
set_property(TARGET 3d-reconstruction PROPERTY CXX_STANDARD 11)