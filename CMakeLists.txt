cmake_minimum_required(VERSION 3.16)
project(facade)

set(CMAKE_CXX_STANDARD 14)

add_executable(facade main.cpp facadebank/bank.cpp facadebank/bank.h facadebank/accountManager.cpp facadebank/accountManager.h)