#include "sint2float.h"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(sint2float, zero2zero)
{
    ASSERT_EQ(0, sint2float(0x0));
    ASSERT_EQ(1, sint2float(0x7fffffff));
}

