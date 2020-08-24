cmake_minimum_required(VERSION 3.1)

project(timer3)

include_directories(./src)

find_package(Boost REQUIRED COMPONENTS chrono)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

add_executable(timer3 ./src/main.cpp)
target_link_libraries(timer3 ${Boost_LIBRARIES})