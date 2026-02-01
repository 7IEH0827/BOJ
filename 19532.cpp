#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f, x, y;
	bool eq1, eq2;

	cin >> a >> b >> c >> d >> e >> f;
	
	for (int i = -999; i <= 999; ++i) {
		for (int j = -999; j <= 999; ++j) {
			eq1 = false;
			eq2 = false;

			if (a * i + b * j == c) eq1 = true;

			if (d * i + e * j == f) eq2 = true;

			if (eq1 && eq2) {
				x = i;
				y = j;
				break;
			}
		}

		if (eq1 && eq2) break;
	}

	cout << x << " " << y;
}