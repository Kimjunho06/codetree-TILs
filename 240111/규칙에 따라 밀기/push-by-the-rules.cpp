#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < str2.size(); i++) {
        if (str2[i] == 'L') {
            char front = str1.front();
            str1.erase(str1.begin());
            str1 += front;
        }
        if (str2[i] == 'R') {
            char back = str1.back();
            string tmp = back + str1;
            tmp.erase(str1.size());
            str1 = tmp;
        }
    }

    cout << str1;
}