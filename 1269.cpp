#include <iostream>
#include <map>

using namespace std;

int main()
{
    int A, B, num, count = 0;
    map<int, int> set_AB;

    cin >> A >> B;

    for (int i = 0; i < A + B; ++i) {
        cin >> num;
        set_AB[num]++;
    }

    for(const auto& element : set_AB) {
        if (element.second == 1) {
            count++;
        }
    }

    cout << count;
}