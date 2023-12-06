#include <iostream>
#include <string>
using namespace std;

class point
{
    double y, x;
   
    friend ostream;
public: 

point();
point(int x, int y);
int get_x();
int get_y();
string tostring();
point operator + (const point& c);
point operator - (const point& c);

friend ostream & operator << (ostream &out, const point &c);

};

