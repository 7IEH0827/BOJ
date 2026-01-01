#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string word, word_rvs;

	cin >> word;

	word_rvs = word;
	reverse(word_rvs.begin(), word_rvs.end());

	if (word == word_rvs)
		cout << true;
	else
		cout << false;

	return 0;
}