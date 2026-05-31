#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> str;
    
    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] >= 65 && my_string[i] <= 90)
            str.push_back(my_string[i] + 32);
        else str.push_back(my_string[i]);
    }
    
    sort(str.begin(), str.end());
    
    for (int i = 0; i < str.size(); i++) {
        answer += str[i];
    }
    
    return answer;
}