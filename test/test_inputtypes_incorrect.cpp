/**
 * @file test_inputtypes_incorrect.cpp
 * @author juscghwe <a href = "https://github.com/juscghwe">GitHub<\a>
 * @brief Simulate std::cin with invalid first input and valid second input.
 * @details Testing is done for `int`, `std:string` and `double`.
 * This file is part of {{CinCustomLib}}, which is licensed unter the MIT License. See the LICENSE file for details.
 */

#include <gtest/gtest.h>
#include <../include/CinCustomLib/cin_custom.hpp>
#include <sstream>

class CinCustomInputtypeIncorrectFixture : public ::testing::Test
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

TEST_F(CinCustomInputtypeIncorrectFixture, InvalidIntInputRetry)
{
    SetInput("abc\n7\n");
    EXPECT_EQ(inputHandler.getInput<int>("Enter 7: ", false), 7);
}

TEST_F(CinCustomInputtypeIncorrectFixture, InvalidStringInputRetry)
{
    SetInput("1.8\nabc\n");
    EXPECT_EQ(inputHandler.getInput<std::string>("Enter abc: ", false), "abc");
}

TEST_F(CinCustomInputtypeIncorrectFixture, InvalidDoubleInputRetry)
{
    SetInput("abc\n1.89\n");
    EXPECT_EQ(inputHandler.getInput<double>("Enter 1.89: ", false), 1.89);
}