#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int N, M, num;
    unordered_map<int, int> card;
    vector<int> input;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> num;
        card[num]++;
    }

    cin >> M;

    for(int i = 0; i < M; ++i) {
        cin >> num;
        input.push_back(num);
    }

    for(int i : input) {
        cout << card[i] << " ";
    }
}