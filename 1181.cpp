#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if(a.length() == b.length()) {
        return a < b;
    }

    else {
        return a.length() < b.length();
    }
}

int main()
{
    int N;
    string word;
    vector<string> words;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), compare);

    words.erase(unique(words.begin(), words.end()), words.end());

    for(string s : words) {
        cout << s << "\n";
    }
}