#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int ant = 1;
    
    while(ant * 5 <= hp) {
        ant++;
    }
    answer += ant - 1;
    hp -= (ant - 1) * 5;
    
    ant = 1;
    while(ant * 3 <= hp) {
        ant++;
    }
    answer += ant - 1;
    hp -= (ant - 1) * 3;
    
    answer += hp;
    
    return answer;
}