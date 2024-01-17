#include <iostream>
#include <climits>

using namespace std;

int n, a, b;

int f(int num) {
	int left = 1, right = n;
	int cnt = 1;
	int mid = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;
		
		if (mid == num) {
			break;
		}
		cnt++;

		if (mid > num) {
			right = mid - 1;
		}
		else if (mid < num) {
			left = mid + 1;
		}

	}

	return cnt;
}


int main() {
	cin >> n >> a >> b;

	int maxvalue = 0;
	int minvalue = INT_MAX;

	for (int i = a; i <= b; i++) {
		int result = f(i);

		maxvalue = max(result, maxvalue);
		minvalue = min(result, minvalue);
	}

	cout << minvalue << " " << maxvalue;
}