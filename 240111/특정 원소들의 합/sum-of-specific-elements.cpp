#include <iostream>

using namespace std;

int main() {
    int value = 1, answer = 0, n;
    int arr[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> n;

            arr[i][j] = n;
        }
    }

    for (int i = 0; i < 4; i++){
        for(int j = 0; j < value; j++){
            answer += arr[i][j];
        }
        value++;
    }

    cout << answer;
}