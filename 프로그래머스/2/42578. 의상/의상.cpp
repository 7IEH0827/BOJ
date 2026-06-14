#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> category;
    
    for (auto i : clothes) {
        category[i[1]]++;
    }
    
    for (auto i : category) {
        answer *= i.second + 1;
    }
    answer -= 1;
    
    return answer;
}