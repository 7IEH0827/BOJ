#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int coffee = 1;
    
    while (coffee * 5500 <= money) {
        coffee++;
    }
    coffee--;
    
    answer.push_back(coffee);
    answer.push_back(money - (coffee * 5500));
    
    return answer;
}