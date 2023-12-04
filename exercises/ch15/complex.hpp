#include <string>
using namespace std;

class Complex
{
    double real, imag;
    double mag, theta;
    bool polar;

public: 

Complex();
Complex(double r, double i);
double get_real();
double get_imag();
void calculate_polar();
double get_mag();
double get_theta();
string str_cartesian();
string str_polar();
Complex operator - (const Complex& c);
Complex operator / (const Complex& c);
double abs();



};

