#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int num;
    string temp;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (temp.empty()) num = 0;
            else num = stoi(temp);
            
            answer += num;
            
            temp = "";
        }
        
        else if (s[i] == 'Z') answer -= num;
        
        else temp += s[i];
    }

    if (!temp.empty()) {
        num = stoi(temp);    
        answer += num;
    }
    
    return answer;
}