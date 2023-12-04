#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "complex.cpp"
#include "doctest.h"
#include <iostream>
using namespace std;

Complex c1 = Complex(3,4);

TEST_CASE("absolute value") 
{
   CHECK(c1.abs() == 5);
}

