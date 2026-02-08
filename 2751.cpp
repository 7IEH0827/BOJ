#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, num;
    vector<int> number;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> num;
        number.push_back(num);
    }

    sort(number.begin(), number.end());

    for(int i : number) {
        cout << i << "\n";
    }
}