#include <iostream>

using namespace std;

int main() {
	int V, A, B, temp, day;

	cin >> A >> B >> V;

	if (V <= A) cout << 1;

	else {
		day = (V - A) / (A - B);

		if ((V - A) % (A - B) != 0) day++;

		cout << day + 1;
	}
}