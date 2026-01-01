#include <iostream>
using namespace std;

int main()
{
	int N, v, count = 0;
	int array[100];

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> array[i];

	cin >> v;
	for (int i = 0; i < N; i++)
		if (array[i] == v)
			count++;

	cout << count;

	return 0;
}