// Copyright 2018 Nifadyev Vadim

#include <gtest/gtest.h>
#include <cmath>

#include "include/complex_number.h"

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Multiply_By_Zero) {
    // Arrange
    ComplexNumber number1(-454.9, 35.646), number2(0.0, 0.0);   

    // Act
    ComplexNumber result = number1 * number2;

    // Assert
    ComplexNumber expectedResult(0.0, 0.0);
    EXPECT_EQ(result, expectedResult);
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Add_Complex_Numbers_With_Huge_Real_Part) {
    // Arrange
    ComplexNumber number1(DBL_MAX, -435.0), number2(DBL_MAX, 8769.7);  

    // Act
    ComplexNumber result = number1 + number2;

    // Assert
    ComplexNumber expectedResult(INFINITY, 8334.7);
    EXPECT_DOUBLE_EQ(result.getRe(), expectedResult.getRe());
    EXPECT_DOUBLE_EQ(result.getIm(), expectedResult.getIm());
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Get_Infinity_By_Adding_Two_Huge_Complex_Numbers) {
    // Arrange
    ComplexNumber number1(DBL_MAX, DBL_MAX), number2(DBL_MAX, DBL_MAX);

    // Act
    ComplexNumber result = number1 + number2;

    // Assert
    ComplexNumber expectedResult(INFINITY, INFINITY);
    EXPECT_DOUBLE_EQ(result.getRe(), expectedResult.getRe());
    EXPECT_DOUBLE_EQ(result.getIm(), expectedResult.getIm());
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Return_1_If_Complex_Number_Is_Divided_By_Itself) {
    // Arrange
    ComplexNumber number(4234.123, -89.125);

    // Act
    ComplexNumber result = number / number;

    // Assert
    ComplexNumber expectedResult(1.0, 0.0);
    EXPECT_DOUBLE_EQ(result.getRe(), expectedResult.getRe());
    EXPECT_DOUBLE_EQ(result.getIm(), expectedResult.getIm());
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Execute_Multiple_Operations) {
    // Arrange
    ComplexNumber number1(-676.2, 9.0), number2(-2.1, 441.246), number3(10.1, -8.781157);

    // Act
    ComplexNumber result = number1 * number2 - number3;

    // Assert
    ComplexNumber expectedResult(-2561.29, -298380.664);
    EXPECT_NEAR(result.getRe(), expectedResult.getRe(), 0.004);
    EXPECT_NEAR(result.getIm(), expectedResult.getIm(), 0.0001);
}
