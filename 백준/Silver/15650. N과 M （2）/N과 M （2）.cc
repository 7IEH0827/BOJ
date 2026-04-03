#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> result;

void dfs(int start, int depth) {
    if (depth == M) {
        for (auto i: result) {
            cout << i << " ";
        }

        cout << "\n";
        return;
    }

    for (int i = start; i <= N; i++) {
        result.push_back(i);

        dfs(i + 1, depth + 1);

        result.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    dfs(1, 0);

    return 0;
}