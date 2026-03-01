#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;

    for (long long i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int N, M;

    cin >> M >> N;

    for(int i = 0; i < N - M + 1; ++i) {
        if (isPrime(M + i))
            cout << M + i << "\n";
    }
}