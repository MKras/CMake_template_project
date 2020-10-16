#include "gtest/gtest.h"
#include <vector>
#include "../utils.h"

TEST(UtilsTest, reverse) { 

    EXPECT_EQ (std::string("dcba"), utils::reverse("abcd"));    
}

