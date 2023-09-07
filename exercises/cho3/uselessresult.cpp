#include <iostream>
#include <math.h>
using namespace std;


void print_twice(char phil) {
    cout << phil << phil << endl;
}


int main() {
    print_twice('z');
}

//it seems like the function will just proceed as normal and output the result. Within a large program I think it might be ignored. 