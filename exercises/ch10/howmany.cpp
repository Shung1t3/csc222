#include <iostream> 
#include <math.h>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> random_vector(int n, int upper_bound)
{
    vector<int> vec(n);

    for (int i = 0; i < vec.size(); i++) {
        vec[i] = rand() % upper_bound;
    }

    return vec;
}

void print_vector(const vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

int how_many(const vector<int>& vec, int value)
{
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) count++;
    }
    return count;
}

int main(){
srand((unsigned) time(NULL));
int num_values = 1000;
int upper_bound = 10;
vector<int> vector = random_vector(num_values, upper_bound);
cout << "value\thow_many" << endl;
for (int i = 0; i < upper_bound; i++) {
    cout << i << '\t' << how_many(vector, i) << endl;
}
}







/*

rand
0	7
1	7
2	9
3	14
4	9
5	11
6	8
7	11
8	12
9	12

0	122
1	107
2	72
3	102
4	104
5	104
6	83
7	104
8	97
9	105




srand 
0	8
1	11
2	5
3	10
4	13
5	13
6	9
7	11
8	10
9	10



0	89
1	99
2	109
3	96
4	113
5	88
6	89
7	98
8	118
9	101


Some numbers appear more than others but they are usually around the same place. Their differences become more drastic when creating higher amounts of numbers. 






*/