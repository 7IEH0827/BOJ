#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    int x1 = dots[0][0], x2;
    for (int i = 1; i < 4; i++) {
        if (dots[i][0] != x1) {
            x2 = dots[i][0];
            break;
        }
    }
    
    int y1 = dots[0][1], y2;
    for (int i = 1; i < 4; i++) {
        if (dots[i][1] != y1) {
            y2 = dots[i][1];
            break;
        }
    }
    
    int weight, height;
    
    if (x1 > x2) weight = x1 - x2;
    else weight = x2 - x1;
    
    if (y1 > y2) height = y1 - y2;
    else height = y2 - y1;
    
    answer = weight* height;
    return answer;
}