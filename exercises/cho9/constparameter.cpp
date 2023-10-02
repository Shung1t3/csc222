#include <iostream>
#include <math.h>
using namespace std;


struct Time {
    int hour, minute;
    double second;
};

void increment(const Time& time, const double secs)
{
    time.second += secs;

    while (time.second >= 60.0) {
        time.second -= 60.0;
        time.minute += 1;
    }
    while (time.minute >= 60) {
        time.minute -= 60;
        time.hour += 1;
    }
}

//it is given the error that it must be a modifiable value which is not allowed by the sont parameter.

int main(){

Time x = {10, 11, 12};
Time y = {13 , 14, 15};

 

increment(x, 70);



}



