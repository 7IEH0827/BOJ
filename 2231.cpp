#include <iostream>

using namespace std;

int main()
{
	int N, sum, num, temp, creator;
	bool check = false;

	cin >> N;

	for (int i = 1; i < N; ++i) {
		sum = 0;
		num = i;

		while (num != 0) {
			temp = num % 10;
			num -= temp;
			sum += temp;
			num /= 10;
		}

		if (sum + i == N) {
			creator = i;
			check = true;
			break;
		}
	}

	if (check) cout << creator;
	else cout << 0;
}