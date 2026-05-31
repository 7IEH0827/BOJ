#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    size_t pos = str1.find(str2);

    if (pos != string::npos) answer = 1;
    else answer = 2;
    
    return answer;
}