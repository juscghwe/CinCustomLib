/// test_main.cpp

/**
 * @author Julian Schweizer
 */

#include <gtest/gtest.h>
#include <../include/CinCustomLib/cin_custom.hpp>
#include <sstream>

// Arrange: Set up any preconditions
// Act: Call the function or method you're testing
// Assert: Check if the result matches expectations
/**
 * TestSuiteName: Groups related tests, often a class or module.
 * TestName: Describes the specific test case scenario.
 * ASSERT_XXX / EXPECT_XXX: These macros verify the behavior of the code. ASSERT stops the test if the condition fails; EXPECT logs the failure but continues running.
 */

TEST(CinCustomInputtypeIncorrectTest, InvalidInputRetry)
{
    CinCustomLib::CinCustom inputHandler;
    // Simulate std::cin with invalid first input and valid second input
    std::istringstream input("abc\n7\n");
    std::cin.rdbuf(input.rdbuf());  //Redirect std::cin to use the stringstream
    EXPECT_EQ(inputHandler.getInput<int>("Enter 5: "), 7);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}