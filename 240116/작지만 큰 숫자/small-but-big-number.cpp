#include <iostream>
#include <set>

using namespace std;

int main() {
	int n, m;
	set<int> st;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		st.insert(-a);
	}
	
	for (int i = 0; i < m; i++)
	{
		int a;
		cin >> a;

		auto iter = st.lower_bound(-a);
		if (iter != st.end()) {
			cout << -*iter << "\n";
            st.erase(iter);
		}
		else
			cout << -1 << "\n";
	}
}