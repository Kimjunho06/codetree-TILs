#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (m * i == n * j){
                cout << m * i;
                return 0;
            }
        }
    }
}