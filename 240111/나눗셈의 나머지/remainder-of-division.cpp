#include <iostream>

using namespace std;

int main() {
    int n, m, cnt = 0;
    int arr[101];
    cin >> n >> m;

    for (int i = 0; i < 100; i++){
        arr[i] = 0;
    }

    while(n != 1){
        arr[n % m]++;
        n /= m;
    }

    for (int i = 0; i < 100; i++){
        cnt += arr[i] * arr[i];
    }

    cout << cnt;
}