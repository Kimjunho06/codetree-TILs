#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int arr[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
int main() 
{
    int day = 0;
    int m, d, m1, d1;
    cin >> m >> d >> m1 >> d1;
    for (int i = m + 1; i < m1; i++)
    {
        day += arr[i];
    }
    if (m != m1)
    {
        day += d1;
        day += arr[m] - d;
    }
    else
    {
        day += d1 - d;
    }

    int answer = day / 7;
    int temp = day % 7;
    string s;
    cin >> s;
    if (s == "Mon" && temp >= 0)
        answer++;
    if (s == "Tue" && temp >= 1)
        answer++;
    if (s == "Wed" && temp >= 2)
        answer++;
    if (s == "Thu" && temp >= 3)
        answer++;
    if (s == "Fri" && temp >= 4)
        answer++;
    if (s == "Sat" && temp >= 5)
        answer++;
    if (s == "Sun" && temp >= 6)
        answer++;

    cout << answer;
}