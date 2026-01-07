#include <iostream>
#include <string>

using namespace std;

int main()
{
	int B;
	long long N, quotient, remainder;
	string result, temp;

	cin >> N >> B;

	do
	{
		quotient = N / B;
		remainder = N % B;

		if (remainder >= 10) {
			temp = remainder + 55;
			result.insert(0, temp);
		}
		else {
			temp = remainder + 48;
			result.insert(0, temp);
		}

		N = quotient;
	} while (quotient >= B);

	if (quotient >= 10) {
		temp = quotient + 55;
		result.insert(0, temp);
	}
	else if (quotient != 0) {
		temp = quotient + 48;
		result.insert(0, temp);
	}

	cout << result;
}