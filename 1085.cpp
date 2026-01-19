#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h, x_dis, y_dis;

	cin >> x >> y >> w >> h;

	if (w / 2 >= x) x_dis = x;

	else x_dis = w - x;

	if (h / 2 >= y) y_dis = y;

	else y_dis = h - y;

	if (x_dis > y_dis) cout << y_dis;

	else cout << x_dis;
}