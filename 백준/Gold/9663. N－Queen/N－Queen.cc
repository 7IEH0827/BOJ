#include <iostream>
#include <vector>

using namespace std;

int N;
int cnt = 0;

bool col[15], diag1[30], diag2[30];

void dfs(int row) {
    if (row == N) {
        cnt++;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!col[i] && !diag1[row + i] && !diag2[row - i + N]) {
            
            col[i] = diag1[row + i] = diag2[row - i + N] = true;
            
            dfs(row + 1);
            
            col[i] = diag1[row + i] = diag2[row - i + N] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    dfs(0);
    
    cout << cnt << endl;

    return 0;
}