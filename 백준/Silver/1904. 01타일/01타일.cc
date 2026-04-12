#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n == 1) return 1;
    
    int f1 = 1, f2 = 2, f3;

    for(int i = 3; i <= n; ++i) {
        f3 = (f1 + f2) % 15746;
        f1 = f2;
        f2 = f3;
    }

    return f2;
}

int main()
{
    int N;

    cin >> N;

    cout << fibonacci(N);

    return 0;
}