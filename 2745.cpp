#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int B;
	string N;
	long long temp, sum = 0, result = 1;

	cin >> N >> B;

	for (int i = N.length(); i > 0; i--) {
		if (65 <= N[i - 1] && N[i - 1] <= 90)
			sum += (N[i - 1] - 55) * pow(B, N.length() - i);
		else
			sum += (N[i - 1] - 48) * pow(B, N.length() - i);
	}

	cout << sum;
}