#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 0;
    
    int wid = box[0] / n;
    int len = box[1] / n;
    int hei = box[2] / n;
    
    answer = wid * len * hei;
    
    return answer;
}