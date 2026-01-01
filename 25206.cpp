#include <iostream>

using namespace std;

int main() {
	string course, grade;
	double credit, grade_num, average, sum = 0, sum_credit = 0;

	for (int i = 0; i < 20; i++) {
		cin >> course >> credit >> grade;

		if (grade == "A+") grade_num = 4.5;
		else if (grade == "A0") grade_num = 4.0;
		else if (grade == "B+") grade_num = 3.5;
		else if (grade == "B0") grade_num = 3.0;
		else if (grade == "C+") grade_num = 2.5;
		else if (grade == "C0") grade_num = 2.0;
		else if (grade == "D+") grade_num = 1.5;
		else if (grade == "D0") grade_num = 1.0;
		else if (grade == "F") grade_num = 0;
		else if (grade == "P") continue;

		sum += credit * grade_num;
		sum_credit += credit;
	}

	average = sum / sum_credit;

	cout << average;
}