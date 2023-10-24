cmake_minimum_required(VERSION 3.26)
project(CH09FILELINKEDLIST)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH09FILELINKEDLIST main.cpp
        Items.cpp
        Items.h
        ProduceItem.cpp
        ProduceItem.h
        Fruit.cpp
        Fruit.h)
