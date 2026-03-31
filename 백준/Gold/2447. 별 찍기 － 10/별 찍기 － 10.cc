#include <iostream>

using namespace std;

void makeStar(int i, int j, int num) 
{
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
        cout << ' ';
    }

    else {
        if (num / 3 == 0) cout << '*';

        else makeStar(i, j, num / 3);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            makeStar(i, j, N);
        }

        cout << '\n';
    }

    return 0;
}