#include <iostream>
#include <climits>

using namespace std;

long long n, a, b;

long long f(long long num) {
	long long left = 1, right = n;
	long long cnt = 1;
	long long mid = 0;

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
		if (mid < num) {
			left = mid + 1;
		}

	}

	return cnt;
}


int main() {
	cin >> n >> a >> b;

	long long maxvalue = 0;
	long long minvalue = INT_MAX;

	for (long long i = a; i <= b; i++) {
		long long result = f(i);

		maxvalue = max(result, maxvalue);
		minvalue = min(result, minvalue);
	}

	cout << minvalue << " " << maxvalue;
}