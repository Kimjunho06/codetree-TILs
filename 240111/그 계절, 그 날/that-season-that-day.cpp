#include <iostream>

using namespace std;

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    switch (m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (d > 31){
                cout << -1;
                return 0;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (d > 30){
                cout << -1;
                return 0;
            }
            break;

        case 2:
            if (y % 4 == 0){
                if (y % 400 == 0){
                    if (d > 29){
                        cout << -1;
                        return 0;
                    }
                }
                else if (y % 100 == 0){
                    if (d > 28){
                        cout << -1;
                        return 0;
                    }
                }
                else{
                    if (d > 29){
                        cout << -1;
                        return 0;
                    }
                }
            }
        break;
    }

    switch (m){
        case 12:
        case 1:
        case 2:
            cout << "Winter";
            break;
        case 3:
        case 4:
        case 5:
            cout << "Spring";
            break;
        case 6:
        case 7:
        case 8:
            cout << "Summer";
            break;
        case 9:
        case 10:
        case 11:
            cout << "Fall";
            break;
        
    }
}