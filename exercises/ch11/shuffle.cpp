#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void randarray(int array[], const int max){
for (int i = 0; i < max; i++){
    int index = rand() % max;
    int temp = array[i];
    array[i] = array[array[index]];
    array[index] = temp;


};
}

int main(){
int numbers [10];

for (char i = 0; i < 10; i++){
    numbers[i] = i;
   

};

randarray(numbers, 10);
for (int i = 0; i < 10; i++){
    cout << numbers[i] << endl;
    

}



}
