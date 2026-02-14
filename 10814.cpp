#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
}

int main()
{
    int N, age;
    string name;
    vector<pair<int, string>> people;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> age >> name;
        people.push_back({age, name});
    }

    stable_sort(people.begin(), people.end(), compare);

    for(auto& person : people) {
        cout << person.first << " " << person.second << "\n";
    }
}