#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    int N, move, num, pos = 1;
    deque<int> ballon;
    vector<int> inside;

    cin >> N;

    for(int i = 1; i <= N; ++i) {
        ballon.push_back(i);

        cin >> num;
        inside.push_back(num);
    }

    while(true) {
        move = inside[pos - 1];

        cout << ballon.front() << " ";
        ballon.pop_front();

        if(ballon.empty()) break;

        if(move > 0) {
            for(int i = 0; i < move - 1; ++i) {
                ballon.push_back(ballon.front());
                ballon.pop_front();
            }
        }

        else {
            for(int i = 0; i < abs(move); ++i) {
                ballon.push_front(ballon.back());
                ballon.pop_back();
            }
        }

        pos = ballon.front();
    }
}