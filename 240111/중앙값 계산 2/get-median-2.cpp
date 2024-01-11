#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, cnt;
    int arr[101];

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        cnt++;

        if (i % 3 == 1) continue;
        
        sort(arr, arr + cnt);
        cout << arr[cnt / 2] << " ";
    }

}