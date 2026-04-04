#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, sum = 0, digits = 0;
    cout << "Enter number: ";
    cin >> n;

    original = n;
    int temp = n;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";
}
