#include <iostream>

using namespace std;

int main()
{
	int N, x_min, x_max, y_min, y_max, x, y;

	cin >> N;

	cin >> x >> y;
	x_min = x;
	x_max = x;
	y_min = y;
	y_max = y;
	
	for (int i = 1; i < N; ++i) {
		cin >> x >> y;

		if (x > x_max) x_max = x;
		else if (x < x_min) x_min = x;

		if (y > y_max) y_max = y;
		else if (y < y_min) y_min = y;
	}

	cout << (x_max - x_min) * (y_max - y_min);
}