#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, min, sum = 0;
	bool check;
	vector<int> prime;

	cin >> M >> N;

	for (int i = M; i <= N; ++i) {
		if (i == 1) continue;

		check = true;

		for (int j = 1; j < i; ++j) {
			if (j == 1) continue;

			if (i % j == 0) check = false;
		}

		if (check) {
			prime.push_back(i);
			sum += i;
		}
	}

	if (prime.size() == 0) {
		cout << -1;
	}

	else {
		min = prime[0];

		cout << sum << endl << min;
	}
}