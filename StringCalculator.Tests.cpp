#include <gtest/gtest.h>
#include "StringCalculator.h"

TEST(StringCalculatorAddTests, ExpectZeroForEmptyInput) {
    int expectedresult = 0;
    std::string input = "";
    StringCalculator objUnderTest(input);
    int result = objUnderTest.add();

    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, ExpectSumValidInput1) {
    int expectedresult = 3;
    std::string input = "1,2";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);

    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, ExpectSumValidInput2) {
    int expectedresult = 3;
    std::string input = "1,2";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);

    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, ExpectSumValidInput3) {
    int expectedresult = 6;
    std::string input = "1\n2,3";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);

    ASSERT_EQ(result, expectedresult);
}
// 1,\n - should return -1 for an error.
TEST(StringCalculatorAddTests, ExpectErrorInvalidInput1) {
    int expectedresult = 1;
    std::string input = "1\n2,3";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);

    ASSERT_EQ(result, expectedresult);
}
“//;\n1;2”  = 3
TEST(StringCalculatorAddTests, ExpectSumValidInput4) {
    int expectedresult = 3;
    std::string input = "//;\n1;2";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);

    ASSERT_EQ(result, expectedresult);
}

“//;\n1;\n”  = should return error
TEST(StringCalculatorAddTests, ExpectSumValidInput4) {
    int expectedresult = -1;
    std::string input = "//;\n1;\n";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);

    ASSERT_EQ(result, expectedresult);
}

“-5,6”  = should return error
TEST(StringCalculatorAddTests, ExpectErrorInValidInput2) {
    int expectedresult = -1;
    std::string input = "“-5,6” ";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);

    ASSERT_EQ(result, expectedresult);
}

“//;-5;6”  = should return error
TEST(StringCalculatorAddTests, ExpectErrorInValidInput3) {
    int expectedresult = -1;
    std::string input = "“-5,6” ";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);
    // should also output -5 , need to add validation for same.

    ASSERT_EQ(result, expectedresult);
}

“2,1001”  = should return 2
TEST(StringCalculatorAddTests, ExpectSumValidInput5) {
    int expectedresult = 2;
    std::string input = "2,1001";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);
   
    ASSERT_EQ(result, expectedresult);
}

// “//[***]\n1***2***3” = 6
TEST(StringCalculatorAddTests, ExpectSumValidInput5) {
    int expectedresult = 6;
    std::string input = "//[***]\n1***2***3";
    StringCalculator objUnderTest;
    int result = objUnderTest.add(input);
   
    ASSERT_EQ(result, expectedresult);
}







