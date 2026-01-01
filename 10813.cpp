#include <iostream>
using namespace std;

int main()
{
	int N, M, i, j, temp;
	int array[100];

	cin >> N >> M;

	for (int l = 0; l < N; l++)
		array[l] = l + 1;

	for (int l = 0; l < M; l++) {
		cin >> i >> j;

		temp = array[i-1];
		array[i-1] = array[j-1];
		array[j-1] = temp;
	}

	for (int l = 0; l < N; l++)
		cout << array[l] << " ";

	return 0;
}