#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int N;
int S[21][21];
bool visited[21];
int min_val = 1e9;

void dfs(int idx, int count) {
    if (count == N / 2) {
        int dif, start = 0, link = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (visited[i] && visited[j]) start += S[i][j];

                if (!visited[i] && !visited[j]) link += S[i][j];
            }
        }

        dif = abs(start - link);

        if (dif < min_val) min_val = dif;
        
        return;
    }

    for (int i = idx; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;

            dfs(i + 1, count + 1);

            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> S[i][j];
        }
    }

    dfs(0, 0);

    cout << min_val;

    return 0;
}