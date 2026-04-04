#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // swapping
    temp = a;
    a = b;
    b = temp;

    cout << "After swap:\n";
    cout << "a = " << a << " , b = " << b;

    return 0;
}
