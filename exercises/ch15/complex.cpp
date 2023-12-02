#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    double real, imag;
    double mag, theta;
    bool polar;
public:
    Complex() { real = 0; imag = 0; 
    polar =false;
    }
    Complex(double r, double i) { real = r; imag = i; 
    polar = false;

    }

    double get_real()
{
    return real;
};

double get_imag()
{
    return imag;

};
void calculate_polar()
{
    mag = sqrt(real * real + imag * imag);
    theta = atan(imag / real);
    polar = true;
};
double get_mag()
{
    if (polar == false) calculate_polar();
    return mag;
};

double get_theta()
{
    if (polar == false) calculate_polar();
    return theta;

};

string str_cartesian()
{
    return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
}

string str_polar()
{
    string theta = to_string(get_theta());
    string mag = to_string(get_mag());
    return mag  + "e^" + theta + "i";
}



Complex operator - (const Complex& c)
{
    return Complex(real - c.real, imag - c.imag);
};

Complex operator / (const Complex& c)
{
    return Complex(real / c.real, imag / c.imag);


};



double abs(){
double absv;
absv = sqrt(real * real + imag * imag);
return absv;

}


};

int main(){

Complex n(4,3);

Complex a(1,1);

Complex tempsub;

Complex tempdiv;

tempsub = n-a;

tempdiv = n/a;

double ab;

ab = a.abs();

cout << "subtract:" << tempsub.get_real() << "+" << tempsub.get_imag() << "i" << endl << "Division:" << " " << tempdiv.get_real() << "+" << tempdiv.get_imag()<< "+" << endl << "abs:" << " " << ab << endl;
}

