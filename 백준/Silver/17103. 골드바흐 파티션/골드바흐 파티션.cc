#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int n = 1000000;
vector<bool> isprime(n + 1, true);

void SetPrime()
{
    for (int i = 2; i * i <= n; i++) {
        if (!isprime[i]) continue;

        for (int j = i * i; j <= n; j += i)
            isprime[j] = false;
    }
}

int main()
{
    SetPrime();

    int T, N;

	cin >> T;

	while (T--) {
        int count = 0;
		cin >> N;

        vector<int> prime;

		for (int i = 2; i < N; i++) {
            if (isprime[i])
                prime.push_back(i);
		}

        for (auto it = prime.begin(); it != prime.end(); ++it) {
            int other = N - *it;

            if (other < *it) break;

            if(binary_search(it, prime.end(), other))
                count++;
        }

        cout << count << '\n';
	}
}