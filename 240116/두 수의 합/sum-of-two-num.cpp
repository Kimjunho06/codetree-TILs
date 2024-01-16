#include <iostream>
#include <map>

using namespace std;

int f(int n) {
	if (n == 1) return 1;

	return n + f(n - 1);
}

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
		if (a.first == k / 2) {
			answer += f(a.second - 1) * 2;
		}
		else {
			if (mp.find(k - a.first) != mp.end()) {
				int fcnt = a.second;
				int scnt = mp.find(k - a.first)->second;

				if (fcnt == scnt)
					answer += fcnt;
				else
					answer += fcnt * scnt;
			}
		}
	}

	cout << answer / 2;
}