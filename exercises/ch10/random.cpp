#include <iostream> 
#include <math.h>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){

 cout << "RAND_MAX is: " << RAND_MAX << endl;

 for (int i = 1; i < 11; i++) {
  cout << "Random number " << i << ": " << rand() << endl;}

return 0;

}

