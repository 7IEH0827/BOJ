#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    string name, input;
    string pokemon[100000];
    map<string, int> pokemon_wiki;

    cin >> N >> M;

    for(int i = 0; i < N; ++i) {
        cin >> pokemon[i];
        pokemon_wiki.insert(make_pair(pokemon[i], i));
    }

    for(int i = 0; i < M; ++i) {
        cin >> input;

        if(isdigit(input[0]) != 0) {
            cout << pokemon[stoi(input) - 1] << "\n";
        }

        else {
            auto index = pokemon_wiki.find(input);
			cout << index->second + 1 << "\n";
        }
    }
}