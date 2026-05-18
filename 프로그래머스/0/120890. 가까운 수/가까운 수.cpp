#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = array[0];
    int gap = abs(array[0] - n);
    
    for (int i = 1; i < array.size(); i++) {
        if (abs(array[i] - n) < gap) {
            min = array[i];
            gap = abs(array[i] - n);
        }
        
        else if (abs(array[i] - n) == gap) {
            if (min > array[i]) min = array[i];
        }
    }
    
    answer = min;
    return answer;
}