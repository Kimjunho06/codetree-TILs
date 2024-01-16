#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, k;
	long long answer = 0;
	map<long long, int> mp;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		long long input;

		cin >> input;

		if (mp.find(input) != mp.end()) {
			mp.find(input)->second++;
		}
		else {
			mp.insert({ input, 1 });
		}
	}

	for (auto a : mp) {
		if (mp.find(k - a.first) != mp.end()) {
			int fcnt = a.second;
			int scnt = mp.find(k - a.first)->second;
			
			if (fcnt == scnt)
				answer += fcnt;
			else
				answer += abs(fcnt - scnt);
		}
	}

	cout << answer / 2;
}