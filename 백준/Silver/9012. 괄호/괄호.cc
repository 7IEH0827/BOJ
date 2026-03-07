#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int T;
    string str;
    stack<int> vps;

    cin >> T;

    while(T--) {
        while (!vps.empty()) { vps.pop(); }

        cin >> str;

        for(int i = 0; i < str.size(); i++) {
            if (str[i] == '(') vps.push(1);
            
            else {
                if (vps.empty() || vps.top() != 1) vps.push(0);
                
                else vps.pop();
            }
        }

        if (vps.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
}