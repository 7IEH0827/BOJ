#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> x_pos, y_pos;
	int x, y;
	
	for (int i = 0; i < 3; ++i) {
		cin >> x >> y;

		if (find(x_pos.begin(), x_pos.end(), x) == x_pos.end()) {
			x_pos.push_back(x);
		}

		else {
			x_pos.erase(find(x_pos.begin(), x_pos.end(), x));
		}

		if (find(y_pos.begin(), y_pos.end(), y) == y_pos.end()) {
			y_pos.push_back(y);
		}

		else {
			y_pos.erase(find(y_pos.begin(), y_pos.end(), y));
		}
	}

	cout << x_pos[0] << " " << y_pos[0];
}