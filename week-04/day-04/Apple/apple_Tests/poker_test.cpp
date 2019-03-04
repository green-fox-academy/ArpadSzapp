#include "gtest/gtest.h"

extern "C" {
#include "poker.h"
}
TEST(PokerTest, TestNumber)
{
    EXPECT_EQ(get_number(), 1);
}

/*TEST(testApple, firstTest)
{
    //Arrange
    myApple apple;

    //Act
    std::string value = apple.getApple();
    //Assert
    ASSERT_EQ(value, "apple");
}
TEST(testApple, secondTest)
{
    //Arrange
    myApple apple;

    //Act
    std::string value = apple.getApple();
    //Assert
    ASSERT_NE(value, "pear");
}*/