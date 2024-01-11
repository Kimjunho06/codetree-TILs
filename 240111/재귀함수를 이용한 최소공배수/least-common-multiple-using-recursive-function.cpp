#include <iostream>

using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int f(int a, int b){
    return a * b / gcd(a, b);
}

int main() {
    int n, a, answer = 1;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;

        answer = f(answer, a);
    }
    cout << answer;
}