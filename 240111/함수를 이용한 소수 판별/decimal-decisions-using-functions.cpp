#include <iostream>

using namespace std;

int f(int n){
    if (n == 1) return 0;
    for (int i = 2; i < n; i++){
        if (n % i == 0) return 0; 
    }
    return n;
}

int main() {
    int n, m, sum = 0;
    cin >> n >> m;

    for (int i = n; i <= m; i++){
        sum += f(i);
    }

    cout << sum;
}