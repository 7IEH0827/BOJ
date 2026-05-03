#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long combination(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    }
    
    if (r > n / 2) r = n - r;

    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int solution(int balls, int share) {
    if (balls == share) return 1;
    
    return (int)combination(balls, share);
}