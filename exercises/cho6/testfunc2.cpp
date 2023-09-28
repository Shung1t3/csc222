#include <iostream>

using namespace std;



void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}


//will loop forever because end if functions calls the function again. Stack is memory allocated when calling a function, in this case functions are being called a lot causing the computer to slow down.;