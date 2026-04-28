#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    char c;
    
    for (int i = 0; i < my_string.size(); ++i) {
        c = my_string[i];
        
        for (int j = 0; j < n; ++j) {
            answer += c;
        }
    }
    
    return answer;
}