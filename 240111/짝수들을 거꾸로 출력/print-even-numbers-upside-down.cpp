#include <iostream>

using namespace std;


int main() {
    int n, a, cnt = 0;
    int arr[101];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 0) {
            arr[cnt++] = a;
        }
    }
    
    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

}