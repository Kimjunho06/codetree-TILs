#include <iostream>

using namespace std;

int main() {
    int n, m, a, b, sum;
    int arr[101];
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> a;
        arr[i] = a;
    }
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        sum = 0;
        for (int j = a - 1; j <= b - 1; j++){
            sum += arr[j];
        }
        cout << sum << "\n";
    }
}