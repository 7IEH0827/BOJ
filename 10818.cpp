#include <iostream>
using namespace std;

int main()
{
	int N, min, max;
	int array[1000000];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> array[i];

		if (i == 0) {
			min = array[i];
			max = array[i];
			continue;
		}

		if (array[i] < min)
			min = array[i];

		if (array[i] > max)
			max = array[i];
	}

	cout << min << " " << max;

	return 0;
}