#include <iostream>
#include <algorithm>  
#include <vector>

using namespace std;

int main() {
    int n;
    vector<pair<int, string>> v;
    cin >> n;

    string yyddmm, week, weather;

    for (int i = 0; i < n; i++) {
        cin >> yyddmm >> week >> weather;

        if (weather != "Rain") continue;

        int key = 0;
        string value = yyddmm + " " + week + " " + weather;
        for (int i = 0; i < 4; i++) {
            key *= 10;
            key += yyddmm[i] - '0';
        }

        v.push_back({ key, value });
    }

    sort(v.begin(), v.end());

    cout << v[0].second;
}