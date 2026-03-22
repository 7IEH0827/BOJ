#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, count = 0;
    string chat;
    unordered_set<string> room;

    cin >> N;

    while(N--) {
        cin >> chat;

        if(chat == "ENTER") room.clear();

        else {
            if(room.find(chat) == room.end()) {
                room.insert(chat);
                count++;
            }
        }
    }

    cout << count;
}