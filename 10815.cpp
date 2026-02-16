#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int N, M, num;
    vector<int> hand;
    set<int> card;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> num;
        card.insert(num);
    }

    cin >> M;

    for(int i = 0; i < M; ++i) {
        cin >> num;
        hand.push_back(num);
    }

    for(int i = 0; i < M; ++i) {
        if(card.find(hand[i]) != card.end()) cout << 1;
        else cout << 0;

        cout << " ";
    }
}