#include <iostream>
using namespace std;
#include <string>

class Duration 
{

    int day, hour, minute, second;
public:

Duration();
Duration(int second);
Duration convert();
string to_string();
int days();
int hours();
int minutes();
int seconds();
int get_seconds()const;
Duration operator + (const Duration& a);
Duration operator - (const Duration& m);
};



