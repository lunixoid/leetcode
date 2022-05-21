project(unit_tests)

add_subdirectory(third-party/google-test)

add_executable(unit_tests
    test_contains_duplicate.cpp
    test_valid_palindrome.cpp
    test_valid_parentheses.cpp
)

target_link_libraries(unit_tests
    leetcode_solutions
    GTest::GTest 
    GTest::Main
)

add_test(test_all unit_tests)
