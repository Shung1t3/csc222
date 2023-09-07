#include <iostream>
#include <math.h>
using namespace std;


void print_twice(char phil) {
    cout << phil << phil << endl;
}

int main() {
    char argument = 'tryme';
    print_twice(argument);
    return 0;
}

//when given an integer nothing will appear. When given a float nothing will be outputted. when "tryme" is used as an argument it will not work because it is longer than a character. This causes it to only print the last letter of the string twice. 

