#include <iostream>
using namespace std;

int main()
{
	int array[42] = { 0 };
	int num, count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		array[num%42]++;
	}

	for (auto& i : array)
		if (i != 0)
			count++;

	cout << count;

	return 0;
}