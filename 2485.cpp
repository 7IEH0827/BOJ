#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int N, tree, divisor, result;
    vector<int> distance, pos;

    cin >> N;
    
    for(int i = 0; i < N; ++i) {
        cin >> tree;
        pos.push_back(tree);
    }

    for(int i = 1; i < N; ++i) {
        distance.push_back(pos[i] - pos[i - 1]);
    }

    divisor = gcd(distance[0], distance[1]);
    for(int i = 2; i < distance.size(); ++i) {
        divisor = gcd(divisor, distance[i]);
    }

    result = (pos.back() - pos.front()) / divisor + 1 - pos.size();

    cout << result;
}