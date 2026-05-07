#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer = numbers;
    
    if (direction == "right") {
        answer.insert(answer.begin(), numbers[numbers.size() - 1]);
        answer.pop_back();
    }
    
    else {
        answer.push_back(answer[0]);
        answer.erase(answer.begin());
    }
    
    return answer;
}