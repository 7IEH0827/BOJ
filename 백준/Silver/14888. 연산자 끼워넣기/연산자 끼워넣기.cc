#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int numbers[11], operators[4];
int max_val = -1000000001, min_val = 1000000001;

void dfs(int depth, int current_sum) {
    if (depth == N) {
        max_val = max(max_val, current_sum);
        min_val = min(min_val, current_sum);

        return;
    }

    for (int i = 0; i < 4; i++) {
        if (operators[i] > 0) {
            operators[i]--;

            if (i == 0) dfs(depth + 1, current_sum + numbers[depth]);

            else if (i == 1) dfs(depth + 1, current_sum - numbers[depth]);

            else if (i == 2) dfs(depth + 1, current_sum * numbers[depth]);

            else if (i == 3) dfs(depth + 1, current_sum / numbers[depth]);

            operators[i]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 4; i++) {
        cin >> operators[i];
    }

    dfs(1, numbers[0]);

    cout << max_val << "\n" << min_val;

    return 0;
}