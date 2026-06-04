#include <string>
#include <vector>

using namespace std;

bool isForbidden(int num) {
    if (num % 3 == 0) return true;
    if (to_string(num).find('3') != string::npos) return true;
    return false;
}

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= n; ++i) {
        answer++;
        while (isForbidden(answer)) {
            answer++;
        }
    }
    
    return answer;
}