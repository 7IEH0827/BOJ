#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<int> prime;

	cin >> N;

	while (N != 1) {
		for (int i = 2; i <= N; ++i) {
			if (N % i == 0) {
				prime.push_back(i);
				N /= i;
				break;
			}
		}
	}

	if (!prime.empty()) {
		cout << prime[0];

		for (int i = 1; i < prime.size(); ++i) {
			cout << endl << prime[i];
		}
	}
}