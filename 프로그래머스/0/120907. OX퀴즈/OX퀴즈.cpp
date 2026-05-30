#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (const string& q : quiz) {
        stringstream ss(q);
        int X, Y, Z;
        char op, eq;
        
        ss >> X >> op >> Y >> eq >> Z;
        
        int real_result = 0;
        if (op == '+') {
            real_result = X + Y;
        } else if (op == '-') {
            real_result = X - Y;
        }
        
        if (real_result == Z) {
            answer.push_back("O");
        } else {
            answer.push_back("X");
        }
    }
    
    return answer;
}