#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> prefix;
    
    for (auto i : phone_book) {
        prefix.insert(i);
    }
    
    for (int i = 0; i < phone_book.size(); i++) {
        string temp = "";
        
        for (int j = 0; j < phone_book[i].length() - 1; j++) {
            temp += phone_book[i][j];
            
            if (prefix.count(temp)) {
                return false; 
            }
        }
    }
    
    return true;
}