#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 'z') {
            i += 3;
            answer += 0;
        }
        
        else if (numbers[i] == 'o') {
            i += 2;
            answer += 1;
        }
        
        else if (numbers[i] == 't') {
            if (numbers[i + 1] == 'w') {
                i += 2;
                answer += 2;
            }
            
            else {
                i += 4;
                answer += 3;
            }
        }
        
        else if (numbers[i] == 'f') {
            if (numbers[i + 1] == 'o') {
                i += 3;
                answer += 4;
            }
            
            else {
                i += 3;
                answer += 5;
            }
        }
        
        else if (numbers[i] == 's') {
            if (numbers[i + 1] == 'i') {
                i += 2;
                answer += 6;
            }
            
            else {
                i += 4;
                answer += 7;
            }
        }
        
        else if (numbers[i] == 'e') {
            i += 4;
            answer += 8;
        }
        
        else {
            i += 3;
            answer += 9;
        }
        
        answer *= 10;
    }
    answer /= 10;
    
    return answer;
}