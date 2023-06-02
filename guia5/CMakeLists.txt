cmake_minimum_required(VERSION 3.14)
project(guia5)

add_executable(
  main
  main.cpp
  guia5.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)