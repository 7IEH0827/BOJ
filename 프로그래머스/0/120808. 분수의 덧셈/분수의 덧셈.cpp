#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int numer3 = (numer1 * denom2) + (numer2 * denom1);
    int denom3 = denom1 * denom2;
    
    int max = (numer3 > denom3) ? numer3 : denom3;
    int min = (numer3 > denom3) ? denom3 : numer3;
    
    while(min != 0) {
        int temp = max % min;
        max = min;
        min = temp;
    }
    
    answer.push_back(numer3 / max);
    answer.push_back(denom3 / max);
    
    return answer;
}