cmake_minimum_required(VERSION 3.7)
project(cppWrapPython)
set(PY_ENVS /home/jiangz/anaconda3/envs/pt16)
include_directories(
    src
    thrid-party/pybind11/include
    /usr/include/python3.8
    ${PY_ENVS}/include
)
set(LIB_SRC 
    src/main.cpp
    src/wrap.cpp
)
# using libxxx.so：only put the xxx
set(LIBS
    crypt
    pthread
    dl
    util
    m
    python3.8
)
add_library(Wrap ${LIB_SRC})
add_executable(main src/main.cpp)
target_link_libraries(main Wrap ${LIBS})