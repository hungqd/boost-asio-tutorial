cmake_minimum_required(VERSION 3.1)

project(timer4)

include_directories(./src)

find_package(Boost REQUIRED COMPONENTS chrono)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

add_executable(timer4 ./src/main.cpp)
target_link_libraries(timer4 ${Boost_LIBRARIES})
target_compile_features(timer4 PUBLIC cxx_std_20)