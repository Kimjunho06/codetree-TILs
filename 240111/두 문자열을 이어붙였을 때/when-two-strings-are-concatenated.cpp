#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    string comp1 = str1 + str2;
    string comp2 = str2 + str1;

    if (comp1 == comp2)
        cout << "true";
    else
        cout << "false";
}