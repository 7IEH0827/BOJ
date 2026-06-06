#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    int num1 = stoi(bin1, nullptr, 2);
    int num2 = stoi(bin2, nullptr, 2);
    
    int sum = num1 + num2;
    
    if (sum == 0) return "0";
    
    string answer = "";
    while (sum > 0) {
        answer = to_string(sum % 2) + answer;
        sum /= 2;
    }
    
    return answer;
}