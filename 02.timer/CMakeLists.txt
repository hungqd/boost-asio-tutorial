cmake_minimum_required(VERSION 3.1)

project(timer2)

include_directories(./src)

find_package(Boost REQUIRED COMPONENTS chrono)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

add_executable(timer2 ./src/main.cpp)
target_link_libraries(timer2 ${Boost_LIBRARIES})