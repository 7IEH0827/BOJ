#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, num, avg, max = 1, temp, sum = 0, count = 1;
    vector<int> v;

    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> num;

        v.push_back(num);

        sum += num;
    }

    vector<int> frequency;

    sort(v.begin(), v.end());
    
    cout << (int)round((double)sum / N) << "\n";

    cout << v[(v.size() - 1) / 2] << "\n";

    temp = v[0];
    frequency.push_back(temp);
    for(int i = 1; i < v.size(); ++i) {
        if(temp == v[i]) count++;

        else {
            temp = v[i];
            count = 1;
        }

        if(max < count) {
            frequency.clear();
            frequency.push_back(v[i]);
            max = count;
        }

        else if (max == count) frequency.push_back(v[i]);
    }

    sort(frequency.begin(), frequency.end());
    
    if(frequency.size() == 1) cout << frequency[0] << "\n";
    else cout << frequency[1] << "\n";

    cout << v.back() - v.front();
}