#include <iostream>
using namespace std;

int main()
{
	int max, index;
	int array[9];

	for (int i = 0; i < 9; i++) {
		cin >> array[i];

		if (i == 0) {
			max = array[i];
			index = i + 1;
			continue;
		}

		if (array[i] > max) {
			max = array[i];
			index = i + 1;
		}
	}

	cout << max << "\n" << index;

	return 0;
}