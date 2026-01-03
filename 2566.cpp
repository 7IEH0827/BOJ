#include <iostream>

using namespace std;

int main()
{
	int num, max, row, col;
	int array[9][9];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> num;
			array[i][j] = num;
		}
	}

	max = array[0][0];
	row = 1;
	col = 1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (array[i][j] > max) {
				max = array[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}

	cout << max << endl << row << " " << col;
}