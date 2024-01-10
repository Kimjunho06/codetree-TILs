#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int min = 21, max = 0;

    for (int i = 0; i < 3; i++) {
        cin >> str;
        if (str.size() > max)
            max = str.size();
        if (str.size() < min)
            min = str.size();
    }

    cout << max - min;
}