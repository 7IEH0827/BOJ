#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> participant_map;
    
    for (const string& name : participant) {
        participant_map[name]++;
    }
    
    for (const string& name : completion) {
        participant_map[name]--;
    }
    
    for (const string& name : participant) {
        if (participant_map[name] > 0) {
            answer = name;
        }
    }
    
    return answer;
}