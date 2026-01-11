#include <iostream>

using namespace std;

int main()
{
	int X, up = 1, down = 1, count = 1, loop_num = 1;

	cin >> X;

	while (true) {
		if (count == X) break;

		count++;

		if (loop_num % 2 == 0) {
			up++;

			if (down == 1) loop_num++;

			else down--;
		}

		else {
			down++;

			if (up == 1) loop_num++;

			else up--;
		}
	}

	cout << up << "/" << down;
}