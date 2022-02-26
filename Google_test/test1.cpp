#include "gtest/gtest.h"
#include "WordCount.cpp"

TEST(smallFile, 1) {
    EXPECT_EQ(0, WordCount("-w","/Users/pavelchernyshev/Desktop/untitled4/Google_test/smallFile.txt"));
}

TEST(smallFile, 2) {
    EXPECT_EQ(0, WordCount("-l","/Users/pavelchernyshev/Desktop/untitled4/Google_test/smallFile.txt"));
}

TEST(smallFile, 3) {
    EXPECT_EQ(0, WordCount("-c","/Users/pavelchernyshev/Desktop/untitled4/Google_test/smallFile.txt"));
}

TEST(bigFile, 1) {
    EXPECT_EQ(0, WordCount("-w","/Users/pavelchernyshev/Desktop/untitled4/Google_test/bigFile.txt"));
}

TEST(bigFile, 2) {
    EXPECT_EQ(0, WordCount("-l","/Users/pavelchernyshev/Desktop/untitled4/Google_test/bigFile.txt"));
}

TEST(bigFile, 3) {
    EXPECT_EQ(0, WordCount("-c","/Users/pavelchernyshev/Desktop/untitled4/Google_test/bigFile.txt"));
}
