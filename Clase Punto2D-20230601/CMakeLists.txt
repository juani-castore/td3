cmake_minimum_required(VERSION 3.14)
project(punto2d)

add_executable(
  main
  main.cpp
  Punto2D.cpp
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)