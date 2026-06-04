#include <string>
#include <vector>

using namespace std;

bool isParallel(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
    long long dy1 = p2[1] - p1[1];
    long long dx1 = p2[0] - p1[0];
    long long dy2 = p4[1] - p3[1];
    long long dx2 = p4[0] - p3[0];
    
    return (dy1 * dx2) == (dy2 * dx1);
}

int solution(vector<vector<int>> dots) {
    if (isParallel(dots[0], dots[1], dots[2], dots[3])) return 1;
    if (isParallel(dots[0], dots[2], dots[1], dots[3])) return 1;
    if (isParallel(dots[0], dots[3], dots[1], dots[2])) return 1;
    
    return 0;
}