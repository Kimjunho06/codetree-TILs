#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1, str2;
	int T, cnt = 0;

	cin >> str1 >> str2;
	T = str2.size();

	while (T--)
	{
		if (str1 == str2) {
			cout << cnt;
			return 0;
		}

		char back = str1.back();
		str1.erase(str1.length() - 1);
		string tmp = back + str1;
		str1 = tmp;
		cnt++;
	}

	cout << -1;
}