#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int entry = nums.size() / 2;
    map<int, int> poncketmon;
    
    for (int i = 0; i < nums.size(); i++) {
        poncketmon[nums[i]]++;
    }
    
    answer = (entry < poncketmon.size()) ? entry : poncketmon.size();
    
    return answer;
}