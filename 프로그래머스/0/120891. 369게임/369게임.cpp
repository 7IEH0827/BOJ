#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    while (order >= 10) {
        if (order % 10 == 3 || order % 10 == 6 || order % 10 == 9) answer++;
        
        order /= 10;
    }
    if (order == 3 || order == 6 || order == 9) answer++;
    
    return answer;
}