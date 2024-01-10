#include <iostream>

using namespace std;

int main() {
    int n, m;
    int Narr[101];
    int Marr[101];

    cin >> n >> m;

    if (n > m) {
        int tmp = m;
        m = n;
        n = tmp;
    }

    for (int i = 0; i < m; i++) Narr[i] = n * (i + 1);

    for (int i = 0; i < n; i++) Marr[i] = m * (i + 1);


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (Narr[i] == Marr[j]) {
                cout << Narr[i];
                return 0;
            }
        }
    }
}