#include <iostream>
#include <stack>

using namespace std;

int main() {
    string str;
    stack<char> st;

    cin >> str;

    for (int i = 0 ; i < str.size(); i++){
        if (i == 0) continue;
        if (i % 2 == 1){
            st.push(str[i]);
        }

    }
    
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}