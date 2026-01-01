#include <iostream>
using namespace std;

int main()
{
	string croatia;
	int i = 0, count = 0;

	cin >> croatia;

	while(i < croatia.length()) {
		if (croatia[i] == 'c' && (croatia[i + 1] == '=' || croatia[i + 1] == '-'))
			i++;

		else if (croatia[i] == 'd') {
			if (croatia[i + 1] == '-')
				i++;
			else if (croatia[i + 1] == 'z' && croatia[i + 2] == '=')
				i += 2;
		}

		else if ((croatia[i] == 'd' && croatia[i + 1] == '-') || (croatia[i] == 'l' && croatia[i + 1] == 'j') || (croatia[i] == 'n' && croatia[i + 1] == 'j') || (croatia[i] == 's' && croatia[i + 1] == '=') || (croatia[i] == 'z' && croatia[i + 1] == '='))
			i++;
		
		count++;
		i++;
	}

	cout << count;
	
	return 0;
}