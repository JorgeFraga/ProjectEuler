# Unit Tests
# Add test cpp file
add_executable( runUnitTests gTests.cpp)
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest_main Problems)
add_test( runUnitTests runUnitTests )
