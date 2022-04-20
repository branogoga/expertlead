#include "pch.h"
#include "math.h"

TEST(TestSql, Zero) {
  EXPECT_EQ(0.0, sqr(0));
  EXPECT_EQ(1.0, sqr(1));
  EXPECT_EQ(4.0, sqr(2));
  EXPECT_EQ(9.0, sqr(3));
  EXPECT_EQ(121.0, sqr(11));
  EXPECT_EQ(6.25, sqr(2.5));
  EXPECT_EQ(1.0, sqr(-1));
  EXPECT_EQ(6.25, sqr(-2.5));
}