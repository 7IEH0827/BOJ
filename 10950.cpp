#include <iostream>
using namespace std;

int main()
{
	int test, A, B;

	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> A >> B;
		cout << A + B << endl;
	}
	
	return 0;
}