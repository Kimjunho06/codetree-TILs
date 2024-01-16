#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int n, m, a;
	unordered_set<int> st;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a;
		st.insert(a);
	}

	for (int i = 0; i < m; i++) {
		cin >> a;
		
		if (st.find(a) != st.end()) {
			st.erase(a);
		}
		else {
			st.insert(a);
		}
	}

	cout << st.size();
}