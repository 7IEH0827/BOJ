#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if(n != 0) answer++;
    
    for(int i = 2; i <= n; ++i) {
        if (n % i == 0) answer += i;
    }
    
    return answer;
}