#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, A, B, comparer, count, remainder;
    vector<int> result;

    cin >> T;

    for(int i = 0; i < T; ++i) {
        cin >> A >> B;
        
        comparer = (A > B) ? A : B;
        remainder = (A > B) ? B : A;

        count = 1;
        while(true) {
            if((comparer * count) % remainder == 0) {
                result.push_back(comparer * count);
                break;
            }

            count++;
        }
    }

    for(int i : result) {
        cout << i << "\n";
    }
}