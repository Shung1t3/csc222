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
int how_many(const vector<int>& vec, int value)
{
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == value) count++;
    }
    return count;
}

vector<int> histogra(vector<int> number, int bounds){
vector<int> histogram(bounds, 0);
for (int i = 0; i < bounds; i++) {
    int index = number[i];
    histogram[index]++;

return histogram;
}

}

void print_vector(const vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

 int main(){


int num_values = 100000;
int upper_bound = 10;
vector<int> vector = random_vector(num_values, upper_bound);
vector<int> z = histogra(vector,10);
print_vector(z);

}
