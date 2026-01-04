#include <iostream>

using namespace std;

int main()
{
	char array[5][15] = { 0 };
	string input;

	for (int i = 0; i < 5; i++) {
		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			array[i][j] = input[j];
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (array[j][i] != 0)
				cout << array[j][i];

			else
				continue;
		}
	}
}