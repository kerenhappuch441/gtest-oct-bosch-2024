
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



}
