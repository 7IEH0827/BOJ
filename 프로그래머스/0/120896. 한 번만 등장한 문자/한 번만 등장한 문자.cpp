#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int str_arr[26] = {0};
    vector<char> str;
    
    for (int i = 0; i < s.size(); i++) {
        str_arr[s[i] - 97]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (str_arr[i] == 1)
            str.push_back(i + 97);
    }
    
    for (int i = 0; i < str.size(); i++) {
        answer += str[i];
    }
    
    return answer;
}