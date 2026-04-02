#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int sign = 1;
    
    if(s[0] == '+' || s[0] == '-') {
        if (s[0] == '-') sign = -1;
        
        s.erase(0, 1);
    }
    
    answer = stoi(s) * sign;
    
    return answer;
}