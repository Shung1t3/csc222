#include <iostream>
#include <string>
#include "point.hpp"
using namespace std;

point::point() { 
    x = 0; 
    y = 0;
}
    point::point(int r, int i) { x = r; y = i; 
  

    }

    int point::get_x()
{
    return x;
};

int point::get_y()
{
    return y;

};



point point::operator + (const point& c)
{
    return point(x + c.x, y + c.y);
};

string point::tostring(){

return to_string(get_x()) + "," + to_string(get_y());


};

point point::operator - (const point& c)
{
    return point(x - c.x, y - c.y);
};



ostream & operator << (ostream &out, const point &c){
    out << c.x << "," << c.y << endl;
    return out;
};
