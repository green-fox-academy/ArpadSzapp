//
// Created by arpad on 2019. 02. 07..
//

#include <gtest/gtest.h>
#include "myClass.h"

TEST(apple_check, test_apple){
    EXPECT_EQ(getApple(), "apple");
}