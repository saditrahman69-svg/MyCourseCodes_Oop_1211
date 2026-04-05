#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    cout << "First letters: ";

    if(str[0] != ' ')
        cout << str[0] << " ";

    for(int i = 1; i < str.length(); i++) {
        if(str[i] != ' ' && str[i-1] == ' ')
            cout << str[i] << " ";
    }
}
