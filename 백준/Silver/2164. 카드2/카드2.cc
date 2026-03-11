#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, temp;
    queue<int> card;
    bool save = false;

    cin >> N;

    for(int i = 1; i <= N; ++i) {
        card.push(i);
    }

    while(true) {
        if(card.size() == 1) break;

        temp = card.front();
        card.pop();

        if(save) card.push(temp);

        save = !save;
    }

    cout << card.front();
}