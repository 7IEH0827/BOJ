#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int A1, A2, B1, B2, R1, R2, divisor;

    cin >> A1 >> B1 >> A2 >> B2;

    R2 = B1 * B2;
    R1 = A1 * B2 + A2 * B1;

    divisor = gcd(R1, R2);

    R1 /= divisor;
    R2 /= divisor;
    
    cout << R1 << " " << R2;
}