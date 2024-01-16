#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int n;
	unordered_set<int> st;

    cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		st.insert(a);
	}

	cout << st.size();
}