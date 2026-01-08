#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> test;
	int T, C, quarter, dime, nickel, penny, temp;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> C;
		test.push_back(C);
	}

	for (int i = 0; i < T; i++) {
		quarter = test[i] / 25;
		test[i] %= 25;

		dime = test[i] / 10;
		test[i] %= 10;

		nickel = test[i] / 5;
		test[i] %= 5;

		penny = test[i] / 1;

		cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
	}
}