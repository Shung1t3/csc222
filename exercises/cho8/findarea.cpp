#include <iostream>
#include <cmath>
using namespace std;

struct point {
double x,y;

};



struct rectangle {
    point corner;
    double width, height;
};

double rectangle_area (rectangle r) {
double area;
area = r.width * r.height;
return area;

}

int main (){
point c = {2.0, 5.0};
rectangle a = {c, 400.0, 500.0}; 

double area = rectangle_area(a);
cout << "the area is" << area << endl;