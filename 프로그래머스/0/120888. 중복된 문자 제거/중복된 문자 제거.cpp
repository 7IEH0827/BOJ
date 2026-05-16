#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int str_arr[95] = {0};
    
    for (int i = 0; i < my_string.size(); i++) {
        if (str_arr[my_string[i] - 32] == 0) {
            str_arr[my_string[i] - 32]++;
            answer += my_string[i];
        }
        
        else continue;
    }
    
    return answer;
}