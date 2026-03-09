#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int N, num, count = 1;
    stack<int> line1, line2;
    vector<int> student;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> num;
        student.push_back(num);
    }

    for(int i = 0; i < N; i++) {
        line1.push(student[N - 1 - i]);
    }

    while(true) {
        if(!line1.empty() && line1.top() == count) {
            line1.pop();
            count++;
        }

        else if(!line2.empty() && line2.top() == count) {
            line2.pop();
            count++;
        }

        else if(line1.empty()) {
            if(line2.empty()) {
                cout << "Nice";
            }

            else {
                cout << "Sad";
            }

            break;
        }

        else {
            line2.push(line1.top());
            line1.pop();
        }
    }
}