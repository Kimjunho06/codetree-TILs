#include <iostream>
#include <set>

using namespace std;

int main() {
	int n, m;
	set<int, greater<int>> st;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		long long a;
		cin >> a;

		st.insert(a);
	}

	int cnt = 0;
	for (auto a : st) {
		if (cnt == m) return 0;

		cout << a << " ";
		cnt++;
	}
}