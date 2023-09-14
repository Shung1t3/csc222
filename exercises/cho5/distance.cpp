#include <iostream>
#include <math.h>
using namespace std;



double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    cout << "dx is " << dx << endl;
    cout << "dy is " << dy << endl;
    return 0.0;
}

int main() {

double dist = distance(1.5, 2.3, 7.0, 10.0);
cout << "dist is: " << dist << endl;



}

//function works as expected, displaying the distances.