cmake_minimum_required(VERSION 3.1)

project(timer1)

include_directories(./src)

find_package(Boost REQUIRED COMPONENTS chrono)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

add_executable(timer1 ./src/main.cpp)
target_link_libraries(timer1 "${Boost_LIBRARIES}")