#include "calculator.h"
#include <gtest/gtest.h>

using namespace ::testing;


TEST(Calculator, add_method)
{
    Calculator calc(1,1);
    ASSERT_EQ(2,calc.add());
}

TEST(Calculator, subract_method_works_with_positive_numbers)
{
    Calculator calc(2,1);
    ASSERT_EQ(1, calc.sub());
}

TEST(Calculator, subract_method_return_negative_number)
{
    Calculator calc(5, 7);
    ASSERT_EQ(calc.sub(), -2);
}

TEST(Calculator, subract_method_works_with_negative_numbers)
{
     Calculator calc(-1, -2);
     ASSERT_EQ(calc.sub(), 1);
}

TEST(Calculator, subract_method_works_with_zero)
{
     Calculator calc(2, 2);
     ASSERT_EQ(calc.sub(), 0);
}

TEST(Calculator, subract_method_works_with_argument_zero)
{
     Calculator calc(0, 2);
     ASSERT_EQ(calc.sub(), -2);
}

TEST(Calculator, mul_method_works_with_positive_numbers)
{
    Calculator calc(8,2);
    EXPECT_EQ(calc.mul(), 16);
}
