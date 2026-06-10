#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b, vector<int> g, vector<int> s, vector<int> w, vector<int> t) {
    long long low = 0;
    long long high = 400000000000000LL;
    long long answer = high;

    while (low <= high) {
        long long mid = (low + high) / 2;

        long long total_gold = 0;
        long long total_silver = 0;
        long long total_mineral = 0;

        for (size_t i = 0; i < g.size(); ++i) {
            long long current_g = g[i];
            long long current_s = s[i];
            long long current_w = w[i];
            long long current_t = t[i];

            long long move_count = (mid + current_t) / (2 * current_t);
            long long max_transport = move_count * current_w;

            total_gold += min(current_g, max_transport);
            total_silver += min(current_s, max_transport);
            total_mineral += min(current_g + current_s, max_transport);
        }

        if (total_gold >= a && total_silver >= b && total_mineral >= ((long long)a + b)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}