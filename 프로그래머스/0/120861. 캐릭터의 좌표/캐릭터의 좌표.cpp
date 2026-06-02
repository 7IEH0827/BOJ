#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0;
    int y = 0;
    
    for (int i = 0; i < keyinput.size(); i++) {
        if (keyinput[i] == "left") x--;
        else if (keyinput[i] == "right") x++;
        else if (keyinput[i] == "up") y++;
        else if (keyinput[i] == "down") y--;
        
        if (x > ((board[0] - 1) / 2)) x = (board[0] - 1) / 2;
        else if (x < -(((board[0] - 1) / 2))) x = -((board[0] - 1) / 2);
        
        if (y > ((board[1] - 1) / 2)) y = (board[1] - 1) / 2;
        else if (y < -(((board[1] - 1) / 2))) y = -((board[1] - 1) / 2);
    }
    
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}