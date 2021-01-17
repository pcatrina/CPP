cmake_minimum_required(VERSION 3.17)
project(Module00)

set(CMAKE_CXX_STANDARD 14)

add_executable(Module00
        ex01/main.cpp ex01/PhoneBook.hpp ex01/PhoneBook.cpp ex01/Account.cpp ex01/Account.h)
