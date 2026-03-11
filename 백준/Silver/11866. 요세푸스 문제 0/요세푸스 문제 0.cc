#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int N, K, temp, count = 0;
    queue<int> person;
    vector<int> Josephus;

    cin >> N >> K;

    for(int i = 1; i <= N; ++i) {
        person.push(i);
    }

    while(true) {
        if(person.empty()) break;

        temp = person.front();
        person.pop();

        if(count == K - 1) {
            count = 0;
            Josephus.push_back(temp);
        }

        else {
            count++;
            person.push(temp);
        }
    }

    cout << "<" << Josephus[0];
    for(int i = 1; i < Josephus.size(); ++i) {
        cout << ", " << Josephus[i];
    }
    cout << ">";
}