#include <iostream>

using namespace std;

int memory[21][21][21];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0) return 1;

    else if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);

    else if (memory[a][b][c] != 0) return memory[a][b][c];

    else if (a < b && b < c) memory[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);

    else memory[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

    return memory[a][b][c];
}

int main()
{
    int a, b, c;

    while(true) {
        cin >> a >> b >> c;

        if(a == -1 && b == -1 && c == -1) break;

        else {
            cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
        }
    }

    return 0;
}