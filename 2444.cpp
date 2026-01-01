#include <iostream>
using namespace std;

int main()
{
	int line;

	cin >> line;

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < line - 1 - i; j++)
			cout << " ";

		for (int j = 0; j < 1 + 2 * i; j++)
			cout << "*";
		
		cout << " " << endl;
	}

	for (int i = line - 1; i > 0; i--) {
		for (int j = 0; j < line - 1 - (i - 1); j++)
			cout << " ";

		for (int j = 0; j < 1 + 2 * (i - 1); j++)
			cout << "*";

		if (i != 1)
			cout << " " << endl;
	}

	return 0;
}