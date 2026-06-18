#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    deque<int> programming;
    deque<int> speed;
    
    for (int i : progresses) programming.push_back(i);
    for (int i : speeds) speed.push_back(i);
    
    int count;
    while (!programming.empty()) {
        count = 0;
        
        for (int i = 0; i < programming.size(); i++) {
            programming[i] += speed[i];
        }
        
        while (programming[0] >= 100) {
            count++;
            programming.pop_front();
            speed.pop_front();
            
            if (programming.empty()) break;
        }
        
        if (count != 0) answer.push_back(count);
    }
    
    return answer;
}