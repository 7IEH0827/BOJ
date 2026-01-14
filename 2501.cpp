#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> divisor = {};
	int N, K, elements;

	cin >> N >> K;

	for (int i = 1; i <= N; ++i) {
		if (N % i == 0) {
			divisor.push_back(i);
		}
	}

	if (divisor.size() < K) cout << 0;

	else cout << divisor[K - 1];
}