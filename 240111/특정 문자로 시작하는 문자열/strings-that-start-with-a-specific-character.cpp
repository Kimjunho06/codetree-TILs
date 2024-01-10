#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n, cnt = 0;
    float avg = 0;
    string arr[21];
    string str;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        cin.clear();
        arr[i] = str;
    }
    cin >> str;

    for (int i = 0; i < n; i++) {
        if (arr[i][0] == str[0]) {
            avg += arr[i].size();
            cnt++;
        }
    }
    cout << cnt << " ";

    cout << fixed;
    cout.precision(2);
    cout << round(10 * (avg / cnt)) / 10;
}
//