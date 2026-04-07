#include <iostream>
#include <vector>

using namespace std;

int board[9][9];
vector<pair<int, int>> empty_cells;
bool found = false;

bool isValid(int r, int c, int num) {
    for (int i = 0; i < 9; i++) {
        if (board[r][i] == num || board[i][c] == num) return false;
    }

    int start_r = (r / 3) * 3;
    int start_c = (c / 3) * 3;
    for (int i = start_r; i < start_r + 3; i++) {
        for (int j = start_c; j < start_c + 3; j++) {
            if (board[i][j] == num) return false;
        }
    }
    return true;
}

void solve(int index) {
    if (index == empty_cells.size()) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        found = true;
        return;
    }

    int r = empty_cells[index].first;
    int c = empty_cells[index].second;

    for (int num = 1; num <= 9; num++) {
        if (isValid(r, c, num)) {
            board[r][c] = num;
            solve(index + 1);
            
            if (found) return;
            board[r][c] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
            if (board[i][j] == 0) {
                empty_cells.push_back({i, j});
            }
        }
    }

    solve(0);

    return 0;
}