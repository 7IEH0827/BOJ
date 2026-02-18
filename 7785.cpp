#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    string name, record;
    set<string, greater<string>> company;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> name >> record;

        if(record == "enter") 
            company.insert(name);
        else
            company.erase(name);
    }

    for(const auto& name : company) {
        cout << name << '\n';
    }
}