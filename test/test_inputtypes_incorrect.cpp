/// test_inputtypes_incorrect.cpp

/**
 * @author Julian Schweizer
 * @brief Simulate std::cin with invalid first input and valid second input.
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
    EXPECT_EQ(inputHandler.getInput<int>("Enter 7: "), 7);
}

TEST_F(CinCustomInputtypeIncorrectFixture, InvalidStringInputRetry)
{
    SetInput("Hello@#$%^&*()\nabc\n");
    EXPECT_EQ(inputHandler.getInput<std::string>("Enter abc: "), "abc");
}

TEST_F(CinCustomInputtypeIncorrectFixture, InvalidDoubleInputRetry)
{
    SetInput("abc\n1.78\n");
    EXPECT_EQ(inputHandler.getInput<double>("Enter 1.78: "), 1.78);
}