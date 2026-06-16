#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    char temp;
    
    if (A == B) {
        answer = 0;
        return answer;
    }
    
    for (int i = 0; i < A.length(); i++) {
        temp = A[A.length() - 1];
        A = temp + A;
        A.erase(A.length() - 1, 1);
        
        if (A == B) {
            answer = i + 1;
            break;
        }
    }
    
    return answer;
}