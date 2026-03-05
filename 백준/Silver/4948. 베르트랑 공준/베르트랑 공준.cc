#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
    if (n == 1) return false;

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n, count;

    while(true) {
        count = 0;

        cin >> n;

        if (n == 0) break;

        for(int i = n + 1; i <= 2*n; ++i) {
            if (isPrime(i)) count++;
        }

        cout << count << "\n";
    }
}