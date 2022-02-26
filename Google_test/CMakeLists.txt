project(Google_test)

add_subdirectory(lib)
include_directories(lib/googletest/include/gtest)

add_executable(Google_Tests_run test1.cpp)

target_link_libraries(Google_Tests_run gtest gtest_main)