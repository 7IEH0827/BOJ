#include <iostream>
#include <string>
using namespace std;

int main()
{
	int index, sum = 0;
	int dial[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	string word;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		index = word[i] - 65;
		sum += dial[index];
	}

	cout << sum;

	return 0;
}