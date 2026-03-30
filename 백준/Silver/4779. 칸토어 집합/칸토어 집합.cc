#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void cantor(string &str, int start, int len) {
    if (len == 1) return;

    int segment = len / 3;

    for (int i = start + segment; i < start + 2 * segment; i++) {
        str[i] = ' ';
    }

    cantor(str, start, segment);
    cantor(str, start + 2 * segment, segment);
}

int main() {
    int n, len;

    while (cin >> n) {
        len = pow(3, n);
        
        string s(len, '-');

        cantor(s, 0, len);

        cout << s << "\n";
    }
}