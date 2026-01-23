#include <iostream>

using namespace std;

int main()
{
	int r1, r2, r3;

	cin >> r1 >> r2 >> r3;

	if (r1 + r2 + r3 != 180) cout << "Error";

	else {
		if (r1 != r2 && r1 != r3 && r2 != r3) cout << "Scalene";

		else {
			if (r1 == 60 && r2 == 60 && r3 == 60) cout << "Equilateral";

			else cout << "Isosceles";
		}
	}
}