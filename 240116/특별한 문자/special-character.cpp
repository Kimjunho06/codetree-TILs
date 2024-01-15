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

	int cnt = 0;
	for (auto a : mp) {
		if (a.second > 1) continue;
		
		cnt++;
	}

	if (cnt == 0) {
		cout << "None";
	}
	else {
		cout << str[0];
	}
}