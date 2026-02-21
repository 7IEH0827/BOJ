#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    string person;
    map<string, int> unknown;
    vector<string> known;

    cin >> N >> M;

    for (int i = 0; i < N + M; ++i) {
        cin >> person;

        unknown[person]++;

        if(unknown[person] > 1) {
            known.push_back(person);
        }
    }

    sort(known.begin(), known.end());

    cout << known.size() << "\n";

    for (const auto& name : known) {
        cout << name << "\n";
    }
}