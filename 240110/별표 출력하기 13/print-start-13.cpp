#include <iostream>

using namespace std;

int main() {
    int n, max = 0, min = 0;
    cin >> n;

    max = n;
    for (int i = 0; i < n * 2; i++){
        if (i % 2 == 0){ // 큰 수
            for (int j = 0; j < max; j++){
                cout << "* ";
            }
            max--;
        }
        else{
            min++;
            for (int j = 0; j < min; j++){
                cout << "* ";
            }
        }
        cout << "\n";
    }
}