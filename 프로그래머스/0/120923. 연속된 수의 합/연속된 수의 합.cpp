#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int i = total;
    int sum;
    
    while(true) {
        sum = 0;
        for (int j = 0; j < num; j++) {
            sum += i - j;
        }
        
        if (sum == total) break;
        
        i--;
    }
    
    for (int j = num; j > 0; j--) {
        answer.push_back(i - (j - 1));
    }
    
    return answer;
}