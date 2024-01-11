#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

bool comp(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    if (get<0>(a) < get<0>(b)) {
        return true;
    }
    else if (get<0>(a) == get<0>(b)) {
        return get<1>(a) > get<1>(b);  
    }
    else {
        return false;
    }
}

int main() {
    int n, a, b;
    vector<tuple<int, int, int>> v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        v.push_back({ a, b, i + 1 });
    }
    sort(v.begin(), v.end(), comp);

    for (auto value : v) {
        cout << get<0>(value) << " " << get<1>(value) << " " << get<2>(value) << "\n";
    }
}