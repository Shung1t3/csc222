#include "fraction.h"
#include <cmath>
using namespace std;

fraction::fraction(){
num = 0;
denom = 1;
cout << "no parameters" << endl;



}

fraction::fraction(int n, int d){
num = n;
denom = d;
cout << "parameters" << endl;



}

void fraction::print(){

cout << "num:" << num << "denom:" << denom << endl;

}

double fraction::denom_convert(double numb){
double gcfnumb = denom*numb;
return gcfnumb;

}

void fraction::plus(double numb){
numb = denom_convert(numb);
num = num + numb;
cout << "num:" << num << "denom:" << denom << endl;
};

void fraction::minus(double numb){
numb = denom_convert(numb);
num = num - numb;
cout << "num:" << num << "denom:" << denom << endl;

};

void fraction::times(double numb){
num = numb*num;
cout << "num:" << num << "denom:" << denom << endl;



}

void fraction::divided_by(double numb){
denom = denom*numb;
cout << "num:" << num << "denom:" << denom << endl;

}


int main(){

fraction x(2,3);
x.print();
x.plus(2);
x.minus(2);
x.times(3);
x.divided_by(3);



}