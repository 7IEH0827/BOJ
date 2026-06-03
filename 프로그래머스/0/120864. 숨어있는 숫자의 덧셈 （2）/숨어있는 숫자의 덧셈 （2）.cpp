#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int temp = 0;
    
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] >= 48 && my_string[i] <= 57) {
            temp = temp * 10 + (my_string[i] - 48);
        }
        
        else {
            answer += temp;
            temp = 0;
        }
    }
    answer += temp;
    
    return answer;
}