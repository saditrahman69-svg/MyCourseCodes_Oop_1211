#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for(int i = start; i <= end; i++) {
        bool isPrime = true;

        if(i <= 1) continue;

        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            cout << i << " ";
    }
}
