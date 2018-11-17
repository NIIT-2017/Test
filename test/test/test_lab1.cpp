#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, granted1)
{
    ASSERT_EQ(1,ageCheck(18));

}

TEST(task1, denied1)
{
    ASSERT_EQ(0,ageCheck(17));
	
}
