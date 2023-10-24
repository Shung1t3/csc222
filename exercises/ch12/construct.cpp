#include<iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
    Time(double secs);
    Time(int h, int m, double s);
    void print();
};
void Time::print()
{
    Time time = *this;
    cout << time.hour << ":" << time.minute << ":" << time.second << endl;
}

Time::Time(double secs)
{
    hour = int(secs / 3600.0);
    secs -= hour * 3600.0;
    minute = int(secs / 60.0);
    secs -= minute * 60;
    second = secs;
}

Time::Time(int h, int m, double s)
{
hour = h;
minute = m;
second = s;

}

int main(){
Time t = (5,7,1.0);

Time t2 = 570.0;

cout << "time 1:" << endl;
t.print();
cout << "time 2:" << endl;
t2.print();


}