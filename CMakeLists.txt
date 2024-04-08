cmake_minimum_required(VERSION 3.11)

project(station_system)

add_library(station_system ${CMAKE_CURRENT_SOURCE_DIR}/src/city.cpp
${CMAKE_CURRENT_SOURCE_DIR}/src/station.cpp
${CMAKE_CURRENT_SOURCE_DIR}/src/train.cpp
${CMAKE_CURRENT_SOURCE_DIR}/src/route.cpp
${CMAKE_CURRENT_SOURCE_DIR}/src/time.cpp
${CMAKE_CURRENT_SOURCE_DIR}/src/train_manage.cpp
)
