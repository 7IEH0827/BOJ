#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int count = 2;
    while (b >= count) {
        if (a % count == 0 && b % count == 0) {
            a /= count;
            b /= count;
            count = 2;
        } else {
            count++;
        }
    }
    
    while (b % 2 == 0) b /= 2;
    while (b % 5 == 0) b /= 5;
    
    if (b == 1) return 1;
    else return 2;
}