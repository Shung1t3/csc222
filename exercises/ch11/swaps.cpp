#include<iostream>
using namespace std;


void will_swap_with_pointers(char* a, char* b)
{
    cout << "a: " << *a << "  b: " << *b << endl;
    cout << "address of a: " << long(a) << endl;
    cout << "address of b: " << long(b) << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << "  b: " << *b << endl;
}

int main(){
char c = 'c';
char d = 'd';
cout << "Calling will_swap_with_pointers..." << endl;
will_swap_with_pointers(&c, &d);

cout << c << d << endl;

}