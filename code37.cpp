#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int square = n * n;

    while(square != 0) {
        sum += square % 10;
        square /= 10;
    }

    if(sum == n)
        cout << "Neon Number";
    else
        cout << "Not Neon";
}
