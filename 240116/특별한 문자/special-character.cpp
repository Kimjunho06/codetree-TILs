#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	string str;
	unordered_map<char, int> mp;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (mp.find(str[i]) != mp.end()) {
			mp.find(str[i])->second++;
		}
		else {
			mp.insert({ str[i], 1 });
		}
	}

	string answer = "";
	for (auto a : mp) {
		if (a.second > 1) continue;

		answer += a.first;
	}

	int idx = 100001;
	for (auto a : answer) {
		idx = min(idx, (int)str.find(a));
	}

	if (idx == 100001)
		cout << "None";
	else
		cout << str[idx];
}