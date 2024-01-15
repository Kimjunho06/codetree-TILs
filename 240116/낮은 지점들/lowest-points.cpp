#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	long long n;
	long long key, value;
	unordered_map<long long, long long> mp;

	cin >> n;

	for (long long i = 0; i < n; i++)
	{
		cin >> key >> value;

		if (mp.find(key) != mp.end()) {
			mp.find(key)->second = min(mp.find(key)->second, value);
		}
		else {
			mp.insert({ key, value });
		}
	}

	long long sum = 0;
	for (auto a : mp) {
		sum += a.second;
	}

	cout << sum;
}