#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char target = k + '0';
    
    for (int num = i; num <= j; num++) {
        string s = to_string(num);
        for (int idx = 0; idx < s.length(); idx++) {
            if (s[idx] == target) {
                answer++;
            }
        }
    }
    
    return answer;
}