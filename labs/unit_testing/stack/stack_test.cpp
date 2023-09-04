#include "stack.h"
#include <gtest/gtest.h>

using namespace ::testing;


class StackTesting : public ::testing::Test
{
    public:
    
    void SetUp() override
    {
    
    }
    
    void TearDown() override
    {
    }
    
    State expected_state = SUCCESSFUL;
};

TEST_F(StackTesting, able_to_push_in_stack)
{
   
    Stack stack(2);
    State expected_state = SUCCESSFUL;

    ASSERT_EQ(stack.push(10) , expected_state);
}


TEST_F(StackTesting, able_to_push_miltiple_times_in_stack)
{
    State expected_state = SUCCESSFUL;
    Stack stack(5);w
    std::array<int, 5> data_to_push{ 10 , 50 , 80 , 100 , 150};
    for(auto element : data_to_push)
    {
      ASSERT_EQ(stack.push(element) , expected_state);
    }

}