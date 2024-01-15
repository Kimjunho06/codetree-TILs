#include <iostream>
#include <map>

using namespace std;

int main() {
	int n;
	map<int, int> mp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		if (mp.find(a) != mp.end()) {
			continue;
		}
		else {
			mp.insert({ a, i + 1 });
		}
	}

	for (auto a : mp) {
		cout << a.first << " " << a.second << "\n";
	}
}