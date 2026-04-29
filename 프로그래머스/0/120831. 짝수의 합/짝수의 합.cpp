#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 1;
    
    while(count <= n) {
        if (count % 2 == 0) answer += count;
        
        count++;
    }
    
    return answer;
}