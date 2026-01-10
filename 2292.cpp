#include <iostream>

using namespace std;

int main()
{
	int N, room = 1, count = 1;

	cin >> N;

	while (N > room) {
		room += count * 6;
		count++;
	}

	cout << count;
}