#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

int main()
{
    int N, x, y;
    vector<pair<int, int>> pos;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> x >> y;
        pos.push_back({x, y});
    }

    sort(pos.begin(), pos.end(), compare);

    for(int i = 0; i < N; ++i) {
        cout << pos[i].first << " " << pos[i].second << "\n";
    }
}