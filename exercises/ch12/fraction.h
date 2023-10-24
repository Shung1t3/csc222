#include<iostream>

struct fraction{
int num, denom;


fraction();
fraction(int n, int d);
void plus(double numb);
void minus(double numb);
double denom_convert(double numb);
void times(double numb);
void divided_by(double numb);
void print();
};