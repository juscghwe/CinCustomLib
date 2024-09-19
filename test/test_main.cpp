/// test_main.cpp

/**
 * @author Julian Schweizer
 */

#include <gtest/gtest.h>
#include <../include/CinCustomLib/cin_custom.hpp>

TEST(CinCustomTest, BasicInput)
{
    CinCustomLib::CinCustom inputHandler;
    // Assuming we simulate input, or you can mock std::cin for testing
    EXPECT_EQ(inputHandler.getInput<int>("Enter 5: "), 5);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}