#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    int arr[101]; 
    for (int i = 0; i < 10; i++){
        cin >> n;
        arr[i] = n;

        if (n % 3 == 0){
            cnt = i - 1;
            break;
        }
    }

    cout << arr[cnt];
}