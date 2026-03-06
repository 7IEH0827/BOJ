#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int K, num, len, sum = 0;
    stack<int> s;

    cin >> K;

    while(K--) {
        cin >> num;

        if(num == 0) s.pop();
        
        else s.push(num);
    }

    len = s.size();
    for(int i = 0; i < len; i++) {
        sum += s.top();
        s.pop();
    }

    cout << sum;
}