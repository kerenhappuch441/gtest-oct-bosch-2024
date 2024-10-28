
#include "StringCalculator.cpp"
#include <gtest/gtest.h>


class stringCalculatorAddfixture:public testing::Test
{
StringCalculator objectundertest;
void setup() overidden
{
  objectundertest = new StringCalculator();
}
void teardown()
{
  delete objectundertest;
}
};

Test_F(stringCalculatorAddfixture,Returns_0_For_Empty)
{
  string input="";
  int expectedvalue=0;
  int actualvalue=objectundertest->Add(input);
  AssertEQ(actualvalue,expectedvalue);
}

