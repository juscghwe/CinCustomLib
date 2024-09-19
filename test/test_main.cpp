/// test_main.cpp

/**
 * @author Julian Schweizer
 */

#include <gtest/gtest.h>
#include <../include/CinCustomLib/cin_custom.hpp>
#include <sstream>

/**
 * TestSuiteName: Groups related tests, often a class or module.
 * TestName: Describes the specific test case scenario.
 * ASSERT_XXX / EXPECT_XXX: These macros verify the behavior of the code. ASSERT stops the test if the condition fails; EXPECT logs the failure but continues running.
 */

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}