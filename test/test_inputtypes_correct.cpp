/// test_inputtypes_correct.cpp

/**
 * @author Julian Schweizer
 */

#include <gtest/gtest.h>
#include <../include/CinCustomLib/cin_custom.hpp>
#include <sstream>

TEST(CinCustomInputtypeCorrectTest, ValidIntInput)
{
    CinCustomLib::CinCustom inputHandler;
    // Simulate std::cin
    std::istringstream input("5\n");
    std::cin.rdbuf(input.rdbuf());  //Redirect std::cin to use the stringstream
    EXPECT_EQ(inputHandler.getInput<int>("Enter 5: "), 5);
}

TEST(CinCustomInputtypeCorrectTest, ValidStringInput)
{
    CinCustomLib::CinCustom inputHandler;
    // Simulate std::cin
    std::istringstream input("abc\n");
    std::cin.rdbuf(input.rdbuf());  //Redirect std::cin to use the stringstream
    EXPECT_EQ(inputHandler.getInput<std::string>("Enter abc: "), "abc");
}

TEST(CinCustomInputtypeCorrectTest, ValidDoubleInput)
{
    CinCustomLib::CinCustom inputHandler;
    // Simulate std::cin
    std::istringstream input("1.019\n");
    std::cin.rdbuf(input.rdbuf());  //Redirect std::cin to use the stringstream
    EXPECT_EQ(inputHandler.getInput<double>("Enter abc: "), 1.019);
}
