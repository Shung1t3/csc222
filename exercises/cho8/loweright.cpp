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

point find_point (rectangle r) {
r.corner.x = r.corner.x + r.width;
r.corner.y = r.corner.y + r.height;
return r.corner;

}

int main (){
point c = {2.0, 5.0};
rectangle a = {c, 400.0, 500.0}; 

point rightcorner = find_point(a);

cout << '(' << rightcorner.x << "," << rightcorner.y << ")" << endl;
return 0;



}


