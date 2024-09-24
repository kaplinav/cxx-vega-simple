
#include <gtest/gtest.h>
#include "my_sum.h"

TEST(Add, Simple) {
    EXPECT_EQ(my_sum(2, 2), 4);
    EXPECT_EQ(my_sum(2, 3), my_sum(3, 2));
    EXPECT_EQ(my_sum(-42, 3), -39);
}