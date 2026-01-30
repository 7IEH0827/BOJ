#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, element, max, sum;
	vector<int> cards;

	cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		cin >> element;
		cards.push_back(element);
	}

	max = 0;

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = cards[i] + cards[j] + cards[k];

				if (sum <= M && sum > max) max = sum;
			}
		}
	}

	cout << max;
}