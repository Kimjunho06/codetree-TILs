#include <iostream>

using namespace std;

int main() {
    int n, m, multiple = 2;
    cin >> n >> m;

    for (int i = 0; i < 4; i++){
        for (int j = m; j >= n; j--){
            cout << j << " * " << multiple << " = " << j * multiple;
            if (j == n) continue;

            cout << " / ";
        }
        multiple += 2;
        cout << "\n";
    }
}