#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* solution(const char* my_string) {
    int len = strlen(my_string);
    int* answer = (int*)malloc(sizeof(int) * len);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            answer[count++] = my_string[i] - '0';
        }
    }

    qsort(answer, count, sizeof(int), compare);

    return answer;
}