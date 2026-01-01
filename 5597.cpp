#include <iostream>
using namespace std;

int main()
{
	int array[30];
	int index;

	for (int i = 0; i < 30; i++)
		array[i] = i + 1;

	for (int i = 0; i < 28; i++) {
		cin >> index;
		array[index - 1] = 0;
	}

	for (int i = 0; i < 30; i++)
		if (array[i] != 0)
			cout << array[i] << endl;

	return 0;
}