#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    int temp;
    int len = to_string(num).length();
    
    while (num != 0) {
        temp = num % 10;
        
        if (temp == k) answer = len;
        
        len--;
        num /= 10;
    }
    
    if (answer == 0) answer = -1;
    return answer;
}