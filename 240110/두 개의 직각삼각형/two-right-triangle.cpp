#include <iostream>

using namespace std;

int main() {
    int n, value = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j < n - value)
                cout << "*";
            else
                cout << " ";
        }

        for (int j = n - 1; j >= 0; j--){
            if (j < n - value)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
        value++;
    }
}