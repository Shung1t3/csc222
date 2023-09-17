#include <iostream>

using namespace std;





void countdown(int n)
{
    while (n > 0) {
        cout << n << endl;
        n = n - 1;
    }
    cout << "Blastoff!" << endl;
}

int main() {

countdown(11);
countdown(500);
countdown(0);
countdown(-1);

return 0;

}

