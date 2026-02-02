#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M, count, count_less, min = 64;
	char color;

	cin >> N >> M;

	vector <vector<char>> chess(N, vector<char>(M, 0));

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> chess[i][j];
		}
	}

	for (int i = 0; i < N - 7; ++i) {
		for (int j = 0; j < M - 7; ++j) {
			count = 0;

			for (int k = 0; k < 8; ++k) {
				for (int l = 0; l < 8; ++l) {
					if ((k + l) % 2 == 0) {
						if (chess[i + k][j + l] != 'W') count++;
					}

					else {
						if (chess[i + k][j + l] != 'B') count++;
					}
				}
			}

			count_less = (count < 64 - count) ? count : 64 - count;

			if (count_less <= min) min = count_less;
		}
	}

	cout << min;
}