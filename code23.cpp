#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for(int i = 1; i <= 1000; i++) {
        int sum = 0, temp = i, digits = 0;

        int t = i;
        while(t != 0) {
            digits++;
            t /= 10;
        }

        t = i;
        while(t != 0) {
            int rem = t % 10;
            sum += pow(rem, digits);
            t /= 10;
        }

        if(sum == i)
            cout << i << " ";
    }
}
