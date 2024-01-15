#include <iostream>
#include <map>

using namespace std;

int main() {
	int n;
	map<string, int> mp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;

		if (mp.find(str) != mp.end()) {
			mp.find(str)->second++;
		}
		else {
			mp.insert({ str, 1 });
		}
	}

	for (auto a : mp) {
		cout << a.first << " " << a.second << "\n";
	}
}