/// test_inputtypes_correct.cpp

/**
 * @author Julian Schweizer
 * @brief Simulate std::cin with valid first input.
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
    EXPECT_EQ(inputHandler.getInput<int>("Enter 5: "), 5);
}

TEST_F(CinCustomInputtypeCorrectFixture, ValidStringInput)
{
    SetInput("abc\n");
    EXPECT_EQ(inputHandler.getInput<std::string>("Enter abc: "), "abc");
}

TEST_F(CinCustomInputtypeCorrectFixture, ValidDoubleInput)
{
    SetInput("1.019\n");
    EXPECT_EQ(inputHandler.getInput<double>("Enter abc: "), 1.019);
}
