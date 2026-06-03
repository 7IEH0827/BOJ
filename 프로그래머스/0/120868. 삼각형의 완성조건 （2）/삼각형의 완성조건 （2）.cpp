#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    int max = [](int a, int b) { return a >= b ? a : b; }(sides[0], sides[1]);
    int min = [](int a, int b) { return a < b ? a : b; }(sides[0], sides[1]);
    
    int temp = max;
    while (temp + min > max) {
        answer++;
        temp--;
    }
    
    temp = max + 1;
    while (temp < max + min) {
        answer++;
        temp++;
    }
    
    return answer;
}