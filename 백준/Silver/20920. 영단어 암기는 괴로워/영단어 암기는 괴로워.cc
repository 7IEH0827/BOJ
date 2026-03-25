#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }

    if (a.first.length() != b.first.length()) {
        return a.first.length() > b.first.length();
    }

    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string, int> wordcount;
    string word;

    for (int i = 0; i < N; i++) {
        cin >> word;

        if (word.length() >= M) {
            wordcount[word]++;
        }
    }

    vector<pair<string, int>> wordbook(wordcount.begin(), wordcount.end());

    sort(wordbook.begin(), wordbook.end(), compare);

    for (const auto& p : wordbook) {
        cout << p.first << "\n";
    }

    return 0;
}