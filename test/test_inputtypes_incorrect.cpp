/// test_main.cpp

/**
 * @author Julian Schweizer
 */

#include <gtest/gtest.h>
#include <../include/CinCustomLib/cin_custom.hpp>
#include <sstream>

TEST(CinCustomInputtypeIncorrectTest, InvalidInputRetry)
{
    CinCustomLib::CinCustom inputHandler;
    // Simulate std::cin with invalid first input and valid second input
    std::istringstream input("abc\n7\n");
    std::cin.rdbuf(input.rdbuf());  //Redirect std::cin to use the stringstream
    EXPECT_EQ(inputHandler.getInput<int>("Enter 5: "), 7);
}