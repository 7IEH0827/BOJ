#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    char spell;
    int temp;
    
    while (age >= 10) {
        temp = age % 10 + 97;
        age /= 10;
        
        answer = (char)temp + answer;
    }
    temp = age + 97;
    answer = (char)temp + answer;
    
    return answer;
}