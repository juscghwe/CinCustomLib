/**
 * @file test_main.cpp
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @headerfile CinCustomLib/cin_custom.hpp
 * This file is part of {{CinCustomLib}}, which is licensed unter the MIT License. See the LICENSE file for details.
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