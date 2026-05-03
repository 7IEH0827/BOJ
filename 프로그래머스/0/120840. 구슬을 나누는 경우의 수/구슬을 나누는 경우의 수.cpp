#include <string>
#include <vector>

using namespace std;

long long combination(int n, int k) {
    if (k == 0 || n == k) return 1;
    
    if (k > n / 2) k = n - k;
    
    long long res = 1;
    
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    
    return res;
}

int solution(int balls, int share) {
    int answer = 0;
    
    answer = (int)combination(balls, share);
    
    return answer;
}