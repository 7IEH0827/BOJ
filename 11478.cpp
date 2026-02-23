#include <iostream>
#include <set>

using namespace std;

int main()
{
    string S, part;
    set<string> str_part;

    cin >> S;

    for (int i = 0; i < S.size(); ++i) {
        for (int j = 0; j < S.size() - i; ++j) {
            part = S.substr(j, i + 1);
            str_part.insert(part);
        }
    }

    cout << str_part.size();
}