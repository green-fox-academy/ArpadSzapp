#include "gtest/gtest.h"

extern "C" {
#include "poker.h"
}

// 234567890XJQKA
// DSCH


TEST(PokerTest, Test_CardValue_Of_2_Is_2)
{
    // QC lover than KD               1                 -1
    EXPECT_EQ(2, get_card_value("2C"));
}
TEST(PokerTest, Test_CardValue_Of_3_is_3)
{
    EXPECT_EQ(3, get_card_value("3C"));
}
TEST(PokerTest, Test_CardValue_Of_4_is_4)
{
    EXPECT_EQ(4, get_card_value("4C"));
}
TEST(PokerTest, Test_CardValue_Of_A_is_14)
{
    EXPECT_EQ(14, get_card_value("AC"));
}

TEST(PokerTest, Test_CardValue_Of_J_is_11)
{
    EXPECT_EQ(11, get_card_value("JC"));
}
TEST(PokerTest, Test_CardValue_Of_Q_is_12)
{
    EXPECT_EQ(12, get_card_value("QC"));
}

TEST(PokerTest, Test_CardValue_Of_K_is_13)
{
    EXPECT_EQ(13, get_card_value("KC"));
}

TEST(PokerTest, Test_CardValue_Of_T_is_10)
{
    EXPECT_EQ(10, get_card_value("TC"));
}

TEST(PokerTest, TestHighCard)
{
    // 1 == first hand is stronger
    EXPECT_EQ(1, is_stronger("2C 3C 4C 6C 8C", "2D 3D 4D 6D 7D"));
}
TEST(PokerTest, TestHighCardLoses)
{
    // 1 == first hand is stronger
    EXPECT_EQ(-1, is_stronger("2C 3C 4C 6C 8C", "2D 3D 4D 6D 9D"));
}

TEST(PokerTest, TestHighCardCharacter)
{
    // 1 == first hand is stronger
    EXPECT_EQ(-1, is_stronger("2C 3C 4C 6C 8C", "2D 3D 4D 6D KD"));
}

TEST(PokerTest, TestAC_bigger_than_KD)
{
    // AC bigger than KD
    EXPECT_EQ(1, is_stronger("2C 3C 4C 6C AC", "2D 3D 4D 6D KD"));
}

TEST(PokerTest, TestQC_not_bigger_than_KD)
{
    // QC lover than KD               1                 -1
    EXPECT_EQ(-1, is_stronger("2C 3C 4C 6C QC", "2D 3D 4D 6D KD"));
}

TEST(PokerTest, Test_Player1_Wins_By_First_High_Card)
{
    EXPECT_EQ(1, is_stronger("AC 3C 4C 6C 2C", "2D 3D 4D 6D KD"));
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