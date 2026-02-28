#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(long long n)
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
    int test;
    long long n, start;
    vector<long long> n_arr;

    cin >> test;

    for (int i = 0; i < test; ++i) {
        cin >> n;
        n_arr.push_back(n);
    }

    for(int i = 0; i < test; ++i) {
        start = n_arr[i];

        while(true) {
            if (isPrime(start)) {
                cout << start << "\n";
                break;
            }

            ++start;
        }
    }
}