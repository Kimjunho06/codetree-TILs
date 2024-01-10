#include <iostream>

using namespace std;

int main() {
    int n, value = 0;
    cin >> n;

    for (int i = 0 ; i < (n * 2) - 1; i++){
        if (i >= n)
            value--;
        else
            value++;

        for (int j = 0; j < value; j++){
            cout << "*";
        }
        cout << "\n\n";
    }
}