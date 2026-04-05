#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ' && str[i+1] != ' ')
            count++;
    }

    cout << "Words = " << count + 1;
}
