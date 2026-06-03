#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int n = board.size();
    vector<vector<int>> danger_board = board;
    
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1) {
                for (int k = 0; k < 8; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        danger_board[nx][ny] = 1;
                    }
                }
            }
        }
    }
    
    int answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (danger_board[i][j] == 0) {
                answer++;
            }
        }
    }
    
    return answer;
}