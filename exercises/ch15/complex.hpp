#include <string>
using namespace std;


class Complex
{
    double real, imag;
    double mag, theta;
    bool polar;
    friend ostream;
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

friend ostream & operator << (ostream &out, const Complex &c);

};

