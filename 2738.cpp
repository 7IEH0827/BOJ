#include <iostream>

using namespace std;

int main()
{
	int row, col, num;
	int A[100][100], B[100][100], sum[100][100];

	cin >> row >> col;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> num;
			A[i][j] = num;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> num;
			B[i][j] = num;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum[i][j] = A[i][j] + B[i][j];
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
}