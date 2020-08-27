cmake_minimum_required(VERSION 3.1)

project(daytime-client)

include_directories(./src)

find_package(Boost REQUIRED COMPONENTS chrono)

if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif(Boost_FOUND)

add_executable(daytime-client ./src/main.cpp)
target_link_libraries(daytime-client ${Boost_LIBRARIES})
target_compile_features(daytime-client PUBLIC cxx_std_20)