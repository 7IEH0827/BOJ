#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int N, M, count = 0;
    string word;
    vector<string> input;
    set<string> line;

    cin >> N >> M;

    for(int i = 0; i < N; ++i) {
        cin >> word;
        line.insert(word);
    }

    for(int i = 0; i < M; ++i) {
        cin >> word;
        input.push_back(word);
    }

    for(int i = 0; i < M; ++i) {
        if(line.find(input[i]) != line.end()) 
            count++;
    }

    cout << count;
}