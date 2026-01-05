#include <iostream>

using namespace std;

int main()
{
	int array[100][100] = { 0 };
	int paper, row, col, count = 0;

	cin >> paper;
	for (int i = 0; i < paper; i++) {
		cin >> col >> row;
		for (int j = row; j < row + 10; j++) {
			for (int k = col; k < col + 10; k++) {
				array[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (array[i][j] == 1)
				count++;
		}
	}

	cout << count;
}