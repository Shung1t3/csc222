#include<iostream>
using namespace std;


int str_len(string str){
    int count =- 0;
    for (int i = 0;str[i] != 0; i++)
        count++;
return count;


}

int main(){
string dastring = "monkey";
int count = str_len(dastring);

cout << count <<endl;


}