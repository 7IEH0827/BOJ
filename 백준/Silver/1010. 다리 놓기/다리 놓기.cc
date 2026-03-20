#include <iostream>

using namespace std;

int main()
{
    long long dp[30][30] = {0};
    
    for(int i = 0; i < 30; i++) {
        dp[i][0] = 1;
        for(int j = 1; j <= i; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    
    int T;
    long long N, M;

    cin >> T;

    while(T--) {
        cin >> N >> M;

        cout << dp[M][N] << "\n";
    }
    
    return 0;
}