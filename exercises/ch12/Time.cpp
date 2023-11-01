#include<iostream>
#include "Time.h"
#include<cmath>
#include<string>
using namespace std;



string Time::tostring(){

    return to_string(this->hour) + ":" + to_string(this->minute) + ":" + to_string(second);

}

double Time::convert_to_seconds()
{
    int minutes = hour * 60 + minute;
    double seconds = minutes * 60 + second;

    return seconds;
    
}

Time::Time(double secs){
    hour = int(secs / 3600.0);
    secs -= hour * 3600.0;
    minute = int(secs / 60.0);
    secs -= minute * 60;
    second = secs;
}

Time Time::increment()
{

return (Time(convert_to_seconds()));
}

int main(){
Time time = (4,62,70.0);
Time t2 = time.increment();

cout << t2.hour << ":" << t2.minute << ":" << t2.second << endl;



}