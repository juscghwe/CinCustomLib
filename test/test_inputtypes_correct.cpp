/**
 * @file test_inputtypes_correct.cpp
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @brief Simulate std::cin with valid first input.
 * @details Testing is done for `int`, `std:string` and `double`.
 * This file is part of {{CinCustomLib}}, which is licensed unter the MIT License. See the LICENSE file for details.
 */

#include <gtest/gtest.h>
#include <../include/CinCustomLib/cin_custom.hpp>
#include <sstream>

class CinCustomInputtypeCorrectFixture : public ::testing::Test
{
  protected:
    CinCustomLib::CinCustom inputHandler;
    std::istringstream input;

    void SetInput(const std::string& data)
    {
        /**
         * @brief Redirects simulated input string to std::cin.
         * @param data `std::string&` Reference to the simulated input
         */
        input.str(data);
        std::cin.rdbuf(input.rdbuf());
    }
};

TEST_F(CinCustomInputtypeCorrectFixture, ValidIntInput)
{
    SetInput("5\n");
    EXPECT_EQ(inputHandler.getInput<int>("Enter 5: ", false), 5);
}

TEST_F(CinCustomInputtypeCorrectFixture, ValidStringInput)
{
    SetInput("abc\n");
    EXPECT_EQ(inputHandler.getInput<std::string>("Enter abc: ", false), "abc");
}

TEST_F(CinCustomInputtypeCorrectFixture, ValidDoubleInput)
{
    SetInput("1.019\n");
    EXPECT_EQ(inputHandler.getInput<double>("Enter abc: ", false), 1.019);
}
