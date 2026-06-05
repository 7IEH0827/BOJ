#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> sums;
    
    for (int i = 0; i < score.size(); i++) {
        sums.push_back(score[i][0] + score[i][1]);
    }
    
    vector<int> sorted = sums;
    sort(sorted.begin(), sorted.end(), greater<int>());
    
    for (int i = 0; i < sums.size(); i++) {
        int index = find(sorted.begin(), sorted.end(), sums[i]) - sorted.begin();
        answer.push_back(index + 1);
    }
    
    return answer;
}