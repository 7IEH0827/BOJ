#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int A, B, comparer, count, remainder;

    cin >> A >> B;
        
    comparer = (A > B) ? A : B;
    remainder = (A > B) ? B : A;

    count = 1;
    
    while(true) {
        if((comparer * count) % remainder == 0) {
            cout << comparer * count;
            break;
        }

        count++;
    }
}