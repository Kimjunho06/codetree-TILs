#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i % 2 == 1){
                cnt += 2;
            }
            else
                cnt++;
            cout << cnt << " ";
        }
        cout << "\n";
    }
}