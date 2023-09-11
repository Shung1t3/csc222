#include <iostream>
#include <math.h>
using namespace std;


void countdown(int n) {
    if (n == 0) {
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    }
}


int main()
{
    countdown(-2);
    return 0;
}


//The function will keep going until the z shell fails. This is an oversight by the programmer. You might wanrt to put in a failsafe to implement this code so the user won't add a negative number.