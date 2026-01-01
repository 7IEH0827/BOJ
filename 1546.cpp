#include <iostream>
using namespace std;

int main()
{
	int N, M;
	double sum = 0;
	double array[1000];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> array[i];

		if (i == 0)
			M = array[i];
		else
			if (array[i] > M)
				M = array[i];
	}

	for (int i = 0; i < N; i++) {
		array[i] = array[i] / M * 100;
		sum += array[i];
	}

	cout << sum / N;

	return 0;
}