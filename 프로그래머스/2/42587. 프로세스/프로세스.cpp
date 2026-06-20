#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for (int i = 0; i < priorities.size(); i++) {
        q.push({priorities[i], i});
        pq.push(priorities[i]);
    }
    
    int answer = 0;
    
    while (!q.empty()) {
        int current_p = q.front().first;
        int current_idx = q.front().second;
        q.pop();
        
        if (current_p == pq.top()) {
            answer++;
            pq.pop();
            
            if (current_idx == location) {
                return answer;
            }
        } else {
            q.push({current_p, current_idx});
        }
    }
    
    return answer;
}