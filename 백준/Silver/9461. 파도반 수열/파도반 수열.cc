// f(n) = f(n-1) + f(n-5)
// n = 6

#include <iostream>

using namespace std;

long long P[101] = {0, 1, 1, 1, 2};

long long triangle(int n)
{
    for(int i = 5; i <= n; ++i) {
        P[i] = P[i - 1] + P[i - 5];
    }

    return P[n];
}

int main()
{
    int T, N;

    cin >> T;

    while(T--) {
        cin >> N;

        cout << triangle(N) << "\n";
    }

    return 0;
}