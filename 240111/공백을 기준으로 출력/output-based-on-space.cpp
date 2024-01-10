#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, answer = "";
    getline(cin, str);

    for (int i = 0; i < str.size(); i++){
        if (str[i] == ' ') continue;

        answer += str[i];
    }

    getline(cin, str);

    for (int i = 0; i < str.size(); i++){
        if (str[i] == ' ') continue;

        answer += str[i];
    }

    cout << answer;
}