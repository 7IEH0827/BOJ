#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    long long answer = n;
    
    while (t-- > 0) {
        answer *= 2;
    }
    
    return answer;
}