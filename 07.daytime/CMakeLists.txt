cmake_minimum_required(VERSION 3.1)

project(daytime-server)

include_directories(./src)

find_package(Boost REQUIRED COMPONENTS chrono)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

add_executable(daytime-server ./src/main.cpp)
target_link_libraries(daytime-server ${Boost_LIBRARIES})
target_compile_features(daytime-server PUBLIC cxx_std_20)