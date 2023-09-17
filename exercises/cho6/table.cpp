#include <iostream>
#include <math.h>
using namespace std;


int main(){
double x = 1.0;
while (x < 66536.0) {
    cout << x << "\t" << log(x) << "\n";
    x = x + 1.0;
}
}