#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    string answer = "";

    int calc = 0;

    for (int T = 0; T < 2; T++) {
        cin >> str;
        answer = "";
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') continue;
            if (str[i] >= 'A' && str[i] <= 'Z') continue;
    
            answer += str[i];
        }
        calc += stoi(answer);
    }

    cout << calc;
}