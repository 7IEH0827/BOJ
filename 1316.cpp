#include <iostream>

using namespace std;

int main() {
    int N, ans = 0;
    string group;
    bool flag;

    cin >> N;

    while(N--) {
        bool isUsed[26] = { false, };
        
        cin >> group;

        isUsed[group[0] - 'a'] = true;
        flag = true;

        for (int i = 1; i < group.length(); ++i) {
            if (group[i] == group[i - 1]) 
                continue;

            if (isUsed[group[i] - 'a']) 
                flag = false;

            isUsed[group[i] - 'a'] = true;
        }

        if(flag) 
            ans++;
    }

    cout << ans;

    return 0;
}