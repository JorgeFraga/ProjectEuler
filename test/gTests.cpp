#include "gtest/gtest.h"

#include "Problems.h"

TEST(ABC, TEST1) {
	EXPECT_EQ(23, problem1(10));
	EXPECT_EQ(0, problem1(-23));
}
