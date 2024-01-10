#include <iostream>

using namespace std;

int main() {
    int n, m, a;
    int arr1[11][11];
    int arr2[11][11];
    int answer[11][11];

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a;
            arr1[i][j] = a;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a;
            arr2[i][j] = a;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr1[i][j] == arr2[i][j]){
                answer[i][j] = 0;
            }
            else{
                answer[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << answer[i][j] << " ";
        }
        cout << "\n";
    }
}