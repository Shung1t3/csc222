#include<string>

struct Time {
    int hour, minute;
    double second;
    double convert_to_seconds();
    Time(double secs);
    Time increment();
    string tostring();
};
