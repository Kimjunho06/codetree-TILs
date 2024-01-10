#include <iostream>

using namespace std;

int main() {
    int arr[11];
    int n, a, answer = 101;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        cin >> a;

        arr[i] = a;
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            answer = min(answer, abs(arr[i] - arr[j]));
        }
    }

    cout << answer;
}