#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, num, count = 0;
	vector<int> prime;
	bool check;

	cin >> N;

	for (int i = 0; i < N; ++i) {
		cin >> num;
		prime.push_back(num);
	}

	for (int i : prime) {
		check = true;

		if (i == 1) continue;

		for (int j = 1; j < i; ++j) {
			if (j == 1) continue;

			else
				if (i % j == 0) check = false;
		}

		if (check) count++;
	}

	cout << count;
}