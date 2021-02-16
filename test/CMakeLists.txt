enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(unit_tests ${SRC} list_test.cc)

target_link_libraries(unit_tests
        GTest::GTest
        GTest::Main
        )

add_test(tests unit_tests)