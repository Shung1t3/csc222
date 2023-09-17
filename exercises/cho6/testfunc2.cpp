#include <iostream>

using namespace std;



void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}


//will loop forever because end if functions calls the function again.