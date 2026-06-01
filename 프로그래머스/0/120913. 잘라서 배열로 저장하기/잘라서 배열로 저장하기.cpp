#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp;
    
    for (int i = 1; i <= my_str.size(); i++) {
        if (i % n == 0) {
            temp += my_str[i - 1];
            answer.push_back(temp);
            temp = "";
            continue;
        }
        
        temp += my_str[i - 1];
    }
    if (temp != "") answer.push_back(temp);
    
    return answer;
}