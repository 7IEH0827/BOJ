#include <iostream>
using namespace std;

int main()
{
	int N, M, i, j, k;
	int array[100] = { 0 };

	cin >> N >> M;

	for (int l = 0; l < M; l++) {
		cin >> i >> j >> k;

		for (; i <= j; i++)
			array[i - 1] = k;
	}

	for (int l = 0; l < N; l++)
		cout << array[l] << " ";
	return 0;
}