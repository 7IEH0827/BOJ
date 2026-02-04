#include <iostream>

using namespace std;

int main()
{
	int N, num5, num3;
	bool invalid = false;

	cin >> N;

	num5 = N / 5;

	while (true) {
		if ((N - num5 * 5) % 3 == 0) {
			num3 = (N - num5 * 5) / 3;
			break;
		}

		else {
			num5--;
			
			if (num5 < 0) {
				invalid = true;
				break;
			}
		}
	}

	if (!invalid) cout << num5 + num3;
	else cout << -1;
}