// CalculatorTest.cpp
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Calculator.h"
#include "ScientificCalculator.h"
#include "MockCalculator.h"
#include "MockScientificCalculator.h"

using testing::Return;

TEST(CalculatorTest, Add) {
    // Create a mock object for the normal calculator
    MockCalculator mockCalculator;

    // Set expectations on the mock object
    EXPECT_CALL(mockCalculator, Add(2, 3))
        .WillOnce(Return(5));

    EXPECT_CALL(mockCalculator, Add(0, 0))
        .WillOnce(Return(0));

    // Use the mock object in your test
    ASSERT_EQ(5, mockCalculator.Add(2, 3));
    ASSERT_EQ(0, mockCalculator.Add(0, 0));
}

TEST(ScientificCalculatorTest, AddAndPower) {
    // Create a mock object for the scientific calculator
    MockScientificCalculator mockScientificCalculator;

    // Set expectations on the mock object
    EXPECT_CALL(mockScientificCalculator, Add(2, 3))
        .WillOnce(Return(5));

    EXPECT_CALL(mockScientificCalculator, Power(2.0, 3))
        .WillOnce(Return(8.0));

    // Use the mock object in your test
    ASSERT_EQ(5, mockScientificCalculator.Add(2, 3));
    ASSERT_EQ(8.0, mockScientificCalculator.Power(2.0, 3));
}
