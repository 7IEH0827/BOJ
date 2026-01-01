#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num_str1, num_str2;
	int num1, num2;

	cin >> num_str1 >> num_str2;

	for (int i = 0; i < num_str1.length() / 2; ++i) {
		swap(num_str1[i], num_str1[num_str1.length() - i - 1]);
		num1 = stoi(num_str1);
	}

	for (int i = 0; i < num_str2.length() / 2; ++i) {
		swap(num_str2[i], num_str2[num_str2.length() - i - 1]);
		num2 = stoi(num_str2);
	}

	if (num1 > num2)
		cout << num1;
	else
		cout << num2;

	return 0;
}