
#include "StringCalculator.h"
#include <gtest/gtest.h>


class stringCalculatorAddfixture:public testing::Test
{
Stringcalculator objectundertest;

void setup() overidden
{
  objectundertest = new Stringcalculator();

}
void teardown()
{
  delete objectundertest;
}



}
