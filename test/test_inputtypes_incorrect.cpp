/// test_main.cpp

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

TEST_F(CinCustomInputtypeIncorrectFixture, InvalidStringInputRetry)
{
    SetInput("abc\n7\n");
    EXPECT_EQ(inputHandler.getInput<int>("Enter 7: "), 7);
}