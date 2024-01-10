#include <iostream>

using namespace std;

int main() {
    int n, m;
    int arr[101];

    cin >> n >> m;
    
    arr[0] = n;
    arr[1] = m;
    for (int i = 2; i < 10; i++){
        arr[i] = arr[i - 1] + (arr[i-2] * 2);
    }

    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}