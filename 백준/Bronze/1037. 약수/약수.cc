#include <iostream>

using namespace std;

int main()
{
    int Nnum, max, min, A;

    cin >> Nnum;

    cin >> A;
    max = A;
    min = A;

    Nnum--;

    while(Nnum--) {
        cin >> A;

        if(A > max) max = A;

        else if(A < min) min = A;
    }

    cout << max * min;
}