#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, sum = 0, temp;
    cin >> n;

    temp = n;

    while(temp != 0) {
        int rem = temp % 10;
        sum += fact(rem);
        temp /= 10;
    }

    if(sum == n)
        cout << "Strong Number";
    else
        cout << "Not Strong";
}
