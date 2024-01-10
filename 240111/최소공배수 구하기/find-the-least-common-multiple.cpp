#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // m이 무조건 크게
    if (n > m){
        int tmp = m;
        m = n;
        n = tmp;
    }

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (m * i == n * j){
                cout << m * i;
                return 0;
            }
        }
    }
}