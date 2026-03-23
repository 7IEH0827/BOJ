#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N, count = 0;
    string name1, name2;
    map<string, int> record;

    record["ChongChong"]++;

    cin >> N;

    while(N--) {
        cin >> name1 >> name2;

        if(record[name1] == 0 && record[name2] == 0) continue;

        else {
            record[name1]++;
            record[name2]++;
        }
    }

    for(auto s : record) {
        if(s.second > 0) count++;
    }

    cout << count;
}