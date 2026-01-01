#include <iostream>
#include <string>
using namespace std;

int main()
{
	string number;
	int N, sum = 0;

	cin >> N;
	cin >> number;

	for (int i = 0; i < N; i++)
		sum += number[i] - '0';
	
	cout << sum;

	return 0;
}