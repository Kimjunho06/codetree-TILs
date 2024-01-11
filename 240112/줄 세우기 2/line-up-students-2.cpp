#include <algorithm>
#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

bool cmp(tuple<int,int,int>a, tuple<int,int,int> b)
{
    if (get<0>(a) < get<0>(b)) {
        return true;
    }
    else if (get<0>(a) == get<0>(b)) {
        return get<1>(a) > get<1>(b);  
    }
    else {
        return false;
    }
}

int main() 
{
    int n, height, weight;
    cin >> n;
    vector<tuple<int,int,int>>t(n);
    for (int i=1; i<=n; i++)
    {
        cin >> height >> weight ;
        t[i-1] = {height, weight,i};
    }
    sort(t.begin(), t.end(), cmp);
    for (auto n : t)
    {
        cout << get<0>(n) <<" "<<get<1>(n)<<" "<<get<2>(n)<<endl;
    }
}