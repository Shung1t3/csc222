#include <iostream>
#include <math.h>
using namespace std;



void new_line()
{
    cout << endl;
}

int main()
 {

    new_line() + 7;

}

//this will not work because the two types of objects don't go together. Specifically the void type object can't be used in math equations.