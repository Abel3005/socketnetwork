cmake_minimum_required(VERSION 3.5.0) # 최소 요구 버전
project(socketnetwork VERSION 0.1.0 LANGUAGES C CXX) # Meta data
add_executable(socketnetwork main.cpp) # 빌드 대상 추가
execute_process(
    COMMAND bash -c -lws2_32
)