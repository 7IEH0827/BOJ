#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, num;
    vector<int> numbers(10001, 0);

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> num;
        numbers[num]++;
    }

    for(int i = 1; i <= 10000; ++i) {
        for(int j = 0; j < numbers[i]; ++j) {
            cout << i << '\n';
        }
    }
}