#include <iostream>

using namespace std;

int main()
{
	int test, point = 2;

	cin >> test;

	for (int i = 0; i < test; i++) {
		point += point - 1;
	}

	cout << point * point;
}