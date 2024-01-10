#include <iostream>

using namespace std;

int main() {
    int n, m, a, b;
    int arr[11][11];
    
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++){
        cin >> a >> b;

        arr[a - 1][b - 1] = a * b;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}