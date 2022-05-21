project(leetcode_solutions CXX)

add_library(${PROJECT_NAME} STATIC
    include/solutions.hpp
    contains_duplicate.cpp
    valid_anagram.cpp
    valid_palindrome.cpp
    valid_parentheses.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_options(${PROJECT_NAME} INTERFACE
    -Wall
    -fpermissive
    -O0
)
