#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(sizeof(int) * 100);
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            answer[count++] = i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    return answer;
}