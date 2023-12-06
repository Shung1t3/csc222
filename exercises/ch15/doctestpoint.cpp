#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "point.cpp"
#include "doctest.h"
#include <iostream>
using namespace std;

point c1 = point(3,4);

point c2 = point(1,1);

point c3 = c1 + c2;

point c4 = c1 - c2;

TEST_CASE("Check Addition") 
{
   CHECK(c3.tostring() == "4,5");
}

TEST_CASE("Check Addition") 
{
   CHECK(c4.tostring() == "2,3");
}
