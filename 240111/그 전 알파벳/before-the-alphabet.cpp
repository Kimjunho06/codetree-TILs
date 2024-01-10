#include <iostream>

int main() {
    char a;
    std::cin >> a;
    a--;
    if (a < 'a'){
        a = 'z';
    }
    std::cout << a;
}