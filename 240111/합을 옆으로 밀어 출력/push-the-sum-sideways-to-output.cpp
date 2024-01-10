#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, sum = 0, num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		sum += num;
	}

	string str = to_string(sum);
	char front = str.front();

	str.erase(str.begin());
	str += front;

	cout << str;
}