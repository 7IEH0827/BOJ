#include <iostream>
using namespace std;

int main()
{
	int N, M, i, j, max, min;
	int array[100], array_temp[100];

	cin >> N >> M;

	for (int l = 0; l < N; l++)
		array[l] = l + 1;

	for (int l = 0; l < M; l++) {
		cin >> i >> j;
		max = j-1;
		min = i-1;
		
		for (; min <= j-1; min++, max--)
			array_temp[min] = array[max];

		for (; i <= j; i++)
			array[i-1] = array_temp[i-1];
	}

	for (int l = 0; l < N; l++)
		cout << array[l] << " ";

	return 0;
}