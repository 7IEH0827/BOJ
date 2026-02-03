#include <iostream>

using namespace std;

int main()
{
	int N, count, seq = 0, doomsday = 666, remain, temp, temp2;

	cin >> N;

	while (true) {
		temp = doomsday;

		while (temp >= 100) {
			count = 0;
			temp2 = temp;

			for (int i = 0; i < 3; ++i) {
				if (temp2 % 10 == 6) {
					count++;
				}

				temp2 /= 10;
			}

			if (count == 3) {
				seq++;
				break;
			}

			temp /= 10;
		}

		if (seq == N) break;

		doomsday++;
	}

	cout << doomsday;
}