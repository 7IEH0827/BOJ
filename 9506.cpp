#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, sum;
	vector<int> divisor;

	while (true) {
		sum = 0;

		cin >> n;

		if (n == -1) break;

		for (int i = 1; i < n; ++i) {
			if (n % i == 0) {
				divisor.push_back(i);
				sum += i;
			}
		}

		if (sum == n) {
			cout << n << " = 1 ";

			for (int i : divisor) {
				if (i == 1) continue;

				cout << "+ " << i << " ";
			}
		}

		else cout << n << " is NOT perfect.";

		divisor = {};

		cout << endl;
	}
}