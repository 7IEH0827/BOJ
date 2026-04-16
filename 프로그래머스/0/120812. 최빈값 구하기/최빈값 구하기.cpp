#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int num[1001] = {0};
    
    for(auto i : array) {
        num[i]++;
    }
    
    int max = 0;
    for(auto i : num) {
        if(i > max) max = i;
    }
    
    int max_num, count = 0;
    for(int i = 0; i < 1001; ++i) {
        if (num[i] == max) {
            max_num = i;
            count++;
        }
    }
    
    if (count == 1) answer = max_num;
    else answer = -1;
    
    return answer;
}