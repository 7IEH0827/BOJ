#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, num, M;
    vector<int> A;
    deque<int> B;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> num;
        A.push_back(num);
    }

    for(int i = 0; i < N; ++i) {
        cin >> num;
        if(A[i] == 0) B.push_front(num);
    }

    cin >> M;

    for(int i = 0; i < M; ++i) {
        cin >> num;

        B.push_back(num);
        cout << B.front() << " ";
        B.pop_front();
    }
}