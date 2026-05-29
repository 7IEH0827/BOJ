#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    unordered_set<string> s3;
    
    for (auto i : s1) {
        s3.insert(i);
    }
    
    for (auto i : s2) {
        if (s3.count(i)) answer++;
    }
    
    return answer;
}