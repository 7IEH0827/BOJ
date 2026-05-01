#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

string solution(string letter) {
    string answer = "";
    char temp;
    map<string, char> m;
    string sig, spell;
    
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    for (int i = 0; i < morse.size(); ++i) {
        temp = i + 97;
        m.insert({morse[i], temp});
    }
    
    stringstream mor(letter);
    while (mor >> sig) {
        spell = m[sig];
        answer += spell;
    }
    
    return answer;
}