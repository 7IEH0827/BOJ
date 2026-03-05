#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, num, x;
    stack<int> s;

    cin >> N;

    while(N--) {
        cin >> num;

        if(num == 1) {
            cin >> x;
            s.push(x);
        }

        else if(num == 2) {
            if(s.empty()) cout << -1 << "\n";

            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }

        else if(num == 3) {
            cout << s.size() << "\n";
        }

        else if(num == 4) {
            cout << s.empty() << "\n";
        }

        else if(num == 5) {
            if(s.empty()) cout << -1 << "\n";

            else {
                cout << s.top() << "\n";
            }
        }
    }
}