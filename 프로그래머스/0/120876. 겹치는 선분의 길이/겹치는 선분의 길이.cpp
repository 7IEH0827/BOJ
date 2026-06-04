#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    vector<int> count(200, 0);
    
    for (int i = 0; i < 3; ++i) {
        int start = lines[i][0] + 100;
        int end = lines[i][1] + 100;
        
        for (int j = start; j < end; ++j) {
            count[j]++;
        }
    }
    
    int answer = 0;
    for (int i = 0; i < 200; ++i) {
        if (count[i] >= 2) {
            answer++;
        }
    }
    
    return answer;
}