#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    int x_sum = 0;
    int num_sum = 0;
    
    stringstream ss(polynomial);
    string token;
    
    while (ss >> token) {
        if (token == "+") continue;
        
        if (token.find('x') != string::npos) {
            if (token == "x") {
                x_sum += 1;
            } else {
                x_sum += stoi(token.substr(0, token.length() - 1));
            }
        } else {
            num_sum += stoi(token);
        }
    }
    
    string answer = "";
    
    if (x_sum > 0) {
        if (x_sum == 1) {
            answer += "x";
        } else {
            answer += to_string(x_sum) + "x";
        }
    }
    
    if (num_sum > 0) {
        if (!answer.empty()) {
            answer += " + ";
        }
        answer += to_string(num_sum);
    }
    
    return answer;
}