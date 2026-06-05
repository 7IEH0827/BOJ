#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> pronunciation = {"aya", "ye", "woo", "ma"};
    
    for (string str : babbling) {
        for (string p : pronunciation) {
            size_t pos = str.find(p);
            if (pos != string::npos) {
                str.replace(pos, p.length(), " ");
            }
        }
        
        bool is_valid = true;
        for (char c : str) {
            if (c != ' ') {
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            answer++;
        }
    }
    
    return answer;
}