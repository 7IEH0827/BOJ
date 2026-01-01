#include <iostream>
using namespace std;

int main()
{
	int hour, minute, cooking;

	cin >> hour >> minute;
	cin >> cooking;

	hour = hour + ((minute + cooking) / 60);
	minute = (minute + cooking) % 60;

	if (hour >= 24) hour = hour % 24;

	cout << hour << " " << minute;

	return 0;
}