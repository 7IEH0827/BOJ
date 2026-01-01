#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
	int alphabet[26] = { 0 };
	int max, max_index, max_count = 0;
	string input;
	char max_char;

	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (isupper(input[i]))
			input[i] += 32;
		alphabet[input[i] - 97]++;
	}

	max = *max_element(alphabet, alphabet + 26);

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == max) {
			max_count++;
			max_char = i + 65;
		}
	}

	if (max_count >= 2)
		cout << "?";
	else
		cout << max_char;

	return 0;
}