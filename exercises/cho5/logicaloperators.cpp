#include <iostream>
#include <math.h>
using namespace std;

void work (int age){
if (16 < age && age < 65) {
    cout << "age is within the normal working age." << endl;
    }
}

int main() {
work(67);


}

//nothing is printed out because age is too old. Woking fine.