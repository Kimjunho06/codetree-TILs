#include <iostream>

using namespace std;

int main() {
    int n, value = 0, alpha = 65;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < value; j++){
            cout << "  ";
        }
        for (int j = 0; j < n - value; j++){
            cout << (char)alpha << " ";
            alpha++;
            if (alpha == 91)
                alpha = 65;
        }
        value++;
        cout << "\n";
    }
}