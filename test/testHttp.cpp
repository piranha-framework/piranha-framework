#include <gtest/gtest.h>
#include "../server-container/func.c"
#include <iostream>

using namespace std;

string comparableString = "HELLO";

TEST(StrUprTest,PositiveNos) {
	ASSERT_EQ(comparableString,strupr("hello"));

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
