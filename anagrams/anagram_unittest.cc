#include "anagram.h"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Anigram, length_1_string_case)
{
    ASSERT_EQ("a", anagram("a"));
    ASSERT_EQ("b", anagram("b"));
}

TEST(Anigram, length_2_string_case)
{
    ASSERT_EQ("ab ba", anagram("ab"));
    ASSERT_EQ("ba ab", anagram("ba"));
}

/*
TEST(Anigram, length_3_or_longer_string_case)
{
    ASSERT_EQ("abc acb bac bca cab cba", anagram("abc"));
}
*/
