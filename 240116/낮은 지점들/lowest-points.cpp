#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int n;
	int key, value;
	unordered_map<int, int> mp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> key >> value;

		if (mp.find(key) != mp.end()) {
			mp.find(key)->second = min(mp.find(key)->second, value);
		}
		else {
			mp.insert({ key, value });
		}
	}

	int sum = 0;
	for (auto a : mp) {
		sum += a.second;
	}

	cout << sum;
}