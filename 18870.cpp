#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first;
}

int main()
{
    int N, point;
    vector<int> points_origin;
    vector<int> points;
    map<int, int> rank;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> point;
        points.push_back(point);
        points_origin.push_back(point);
    }

    sort(points.begin(), points.end());
    points.erase(unique(points.begin(), points.end()), points.end());

    for(int i = 0; i < points.size(); ++i) {
        rank[points[i]] = i;
    }

    for(int i = 0; i < N; ++i) {
        cout << rank[points_origin[i]] << " ";
    }
    
    return 0;
}