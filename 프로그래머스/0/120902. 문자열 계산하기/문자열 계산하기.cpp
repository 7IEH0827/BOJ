#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int abs = 1;
    int temp = 0;
    
    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] == '+' || my_string[i] == '-') {
            if (my_string[i] == '-') abs = -1;
            else abs = 1;
        }
        
        else if (my_string[i] == ' ') {
            if (my_string[i - 1] == '+' || my_string[i - 1] == '-') {
                temp = 0;
            }
            
            else {
                temp /= 10;
                answer += abs * temp;
            }
        }
        
        else {
            temp += my_string[i] - 48;
            temp *= 10;
            
            if (i == my_string.size() - 1) {
                temp /= 10;
                answer += abs * temp;
            }
        }
    }
    
    return answer;
}