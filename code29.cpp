#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, original;
    cin >> n;

    original = n;

    while(n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if(rev == original)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
