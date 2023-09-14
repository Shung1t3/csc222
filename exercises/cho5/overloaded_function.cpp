#include <iostream>
#include <math.h>
using namespace std;


int overloaded_function(int x){
    
return(x*x);
}

double overloaded_function(int x, int y){

return(x/y);

}

double overloaded_function(int x, int y, int z){

return((x*y)/z);

}

double overloaded_function(int x, int y, int z, int v){

return((x*y)+(z*v));

}

double overloaded_function(int x, int y, int z, int v, int m){

return((x*y)/(z*v) + m);

}

int main(){


cout <<  overloaded_function(6) << endl;
cout <<  overloaded_function(6,7) << endl;
cout <<  overloaded_function(6,7,12) << endl;
cout <<  overloaded_function(6,7,12,3) << endl;
cout <<  overloaded_function(6,7,12,3,4) << endl;





}

//works as intended