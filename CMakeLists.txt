cmake_minimum_required(VERSION 3.25)
project(blockchain_sandbox)

set(CMAKE_CXX_STANDARD 23)

add_executable(blockchain_sandbox main.cpp Block.h Blockchain.h sha256.h sha256.cpp Block.cpp Blockchain.cpp)
