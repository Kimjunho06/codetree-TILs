#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    int cnt = 0;
    string str1, str2;
    queue<char> st;
    bool check = false;

    cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++){
        st.push(str1[i]);
    }

    while(!st.empty()){
        if (check){
            if (st.front() == str2[1]){
                cnt++;
            }
            check = false;
        }

        if (st.front() == str2[0]){
            check = true;
            st.pop();
        }
        else{
            st.pop();
        }


    }

    cout << cnt;
}