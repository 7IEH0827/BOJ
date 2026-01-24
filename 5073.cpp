#include <iostream>

using namespace std;

int main()
{
	int s1, s2, s3, s_max;
	bool invalid;

	while (true) {
		cin >> s1 >> s2 >> s3;
		
		if (s1 == 0 && s2 == 0 && s3 == 0) break;

		else {
			if (s1 == s2 && s1 == s3 && s2 == s3) cout << "Equilateral" << endl;

			else {
				if (s1 >= s2 && s1 >= s3) invalid = s1 < s2 + s3;
				else if (s2 >= s1 && s2 >= s3) invalid = s2 < s1 + s3;
				else if (s3 >= s1 && s3 >= s2) invalid = s3 < s1 + s2;

				if (!invalid) cout << "Invalid" << endl;

				else {
					if (s1 != s2 && s1 != s3 && s2 != s3) cout << "Scalene" << endl;

					else cout << "Isosceles" << endl;
				}
			}
		}
	}
}