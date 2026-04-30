#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> temp = emergency;
    
    sort(temp.rbegin(), temp.rend());
    
    for(int i = 0; i < emergency.size(); ++i) {
        for (int j = 0; j < temp.size(); ++j) {
            if (temp[j] == emergency[i]) {
                answer.push_back(j + 1);
                break;
            }
        }
    }
    
    return answer;
}