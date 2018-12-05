# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)


list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be 11 or 14
set(CMAKE_CXX_STANDARD 11)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
#set(ANTLR4_WITH_STATIC_CRT OFF)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${CMAKE_SOURCE_DIR}/external/antlr-4.7.1-complete.jar)

# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)
antlr_target(Hello ${CMAKE_SOURCE_DIR}/grammar/Hello.g4
    OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/src/generated
    )

include_directories(${ANTLR_Hello_OUTPUT_DIR})

add_executable(hello ${CMAKE_SOURCE_DIR}/src/hello.cpp
               ${ANTLR_Hello_CXX_OUTPUTS})
target_link_libraries(hello antlr4_static)
