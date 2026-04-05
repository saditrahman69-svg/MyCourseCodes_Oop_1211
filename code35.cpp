#include <iostream>
using namespace std;

int main() {
    int n, square, temp;
    cin >> n;

    square = n * n;
    temp = n;

    while(temp != 0) {
        if(temp % 10 != square % 10) {
            cout << "Not Automorphic";
            return 0;
        }
        temp /= 10;
        square /= 10;
    }

    cout << "Automorphic Number";
}
