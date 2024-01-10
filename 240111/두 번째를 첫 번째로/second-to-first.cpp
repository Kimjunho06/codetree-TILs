#include <iostream>

using namespace std;

int main() {
    char alpha = ' ', first = ' ';
    string str;
    cin >> str;

    first = str[0];
    alpha = str[1];

    for (int i = 0 ; i < str.size(); i++){
        if (str[i] == alpha)
            str[i] = first;
    }
    cout << str;

}