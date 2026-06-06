#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int temp;
    
    while (chicken >= 10) {
        answer += chicken / 10;
        temp = chicken % 10;
        
        chicken /= 10;
        chicken += temp;
    }
    
    return answer;
}