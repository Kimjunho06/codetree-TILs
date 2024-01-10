#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n, cnt = 0;
    int arr[30];
    float avg = 0;
    string str;

    cin >> n;
    for (int i = 0; i < 30; i++){
        arr[i] = 0;
    }

    for (int i = 0 ; i < n; i++){
        cin >> str;

        avg += str.size();
        arr[str[0] - 'a']++;
    }
    cin >> str;

    cout << arr[str[0] - 'a'] << " " << round(avg / n) << ".00";
}
//