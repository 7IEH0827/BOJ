#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> result;

void dfs(int depth) {
    if (depth == M) {
        for (auto i: result) {
            cout << i << " ";
        }

        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {
        result.push_back(i);

        dfs(depth + 1);

        result.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    dfs(0);

    return 0;
}