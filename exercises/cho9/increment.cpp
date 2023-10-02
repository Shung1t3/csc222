#include <iostream>
#include <math.h>
using namespace std;


struct Time {
    int hour, minute;
    double second;
};

double convert_to_seconds(const Time& t)
{
    int minutes = t.hour * 60 + t.minute;
    double seconds = minutes * 60 + t.second;

    return seconds;
}

Time make_time(double secs)
{
    Time time;
    time.hour = int(secs / 3600.0);
    secs -= time.hour * 3600.0;
    time.minute = int(secs / 60.0);
    secs -= time.minute * 60;
    time.second = secs;

    return time;
}

Time increment(Time t){
return make_time(convert_to_seconds(t));

}




int main() {

Time x = {8, 61, 70};

Time y = increment(x);

cout << y.hour << y.minute << y.second << endl;



}