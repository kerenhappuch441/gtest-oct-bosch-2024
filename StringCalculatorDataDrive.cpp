#include "StringCalculator.h"

#include <gtest/gtest.h>

#include<vector>
using namespace std;
 
class StringCalculatorAddFixture: public testing::Test{

  protected: 

    StringCalculator *objUnderTest;

  void SetUp() override {

  objUnderTest = new StringCalculator();

  }
void assertEachDataRow(string input, int expectedValue)
{
 int actualValue = objUnderTest->Add(input);
  ASSERT_EQ(actualValue, expectedValue);

}


  void TearDown(){

    delete objUnderTest;

  }

};

 
TEST_F(StringCalculatorAddFixture, DataDriveTest){

 vector<tuple<string,int>>dataSet;
 dataSet.push_back(make_tuple("",0));
 dataSet.push_back(make_tuple("",0));
 dataSet.push_back(make_tuple("",0));
 dataSet.push_back(make_tuple("",0));
 
 for(tuple<string,int> dataRow : dataSet){
  assertEachDataRow(std::get<0>(dataRow),std::get<1>(dataRow));
 }
}
 
T
 
