#include <iostream>
#include <string>
using namespace std;

int main()
{
	string test[10];
	int T;

	cin >> T;
	for (int i = 0; i < T; i++)
		cin >> test[i];

	for (int i = 0; i < T; i++) {
		cout << test[i].front() << test[i].back();
		
		if (i != T - 1)
			cout << endl;
	}

	return 0;
}