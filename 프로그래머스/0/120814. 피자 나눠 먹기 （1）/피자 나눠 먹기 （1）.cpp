#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pizza = 0;
    
    while(pizza * 7 < n) {
        pizza++;
    }
    
    answer = pizza;
    
    return answer;
}