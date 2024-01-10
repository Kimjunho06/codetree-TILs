#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    str2.erase(str2.find(str1));
    if (str2.size() == 0) {
        cout << "true";
    }
    else
        cout << "false";
}