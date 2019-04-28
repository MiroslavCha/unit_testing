
add_executable(unit_tests tests.cpp)

target_include_directories(unit_tests PUBLIC ${PROJECT_SOURCE_DIR}/src ${PROJECT_SOURCE_DIR}/googletest/googlemock/include)
target_link_libraries(unit_tests PUBLIC gtest_main test_lib)

add_test(
    NAME unit_tests
    COMMAND unit_tests)
