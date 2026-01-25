#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> slide;
	int num, max, sum = 0, max_i;

	for (int i = 0; i < 3; ++i) {
		cin >> num;
		slide.push_back(num);
	}

	max_i = max_element(slide.begin(), slide.end()) - slide.begin();
	max = slide[max_i];
	slide.erase(slide.begin() + max_i);

	for (int i : slide) {
		sum += i;
	}

	if (sum <= max) {
		cout << sum + (sum - 1);
	}

	else {
		cout << sum + max;
	}
}