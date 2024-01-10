#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, cnt = 0;
    int arr[11];
    cin >> n >> m;

    for (int i = 0; i < 10; i++){
        arr[i] = 0;
    }

    while(n != 1){
        arr[n % m]++;
        n /= m;
    }

    for (int i = 0; i < 10; i++){
        cnt += arr[i] * arr[i];
    }

    cout << cnt;
}