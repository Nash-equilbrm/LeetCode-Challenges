class Solution {
public:
    const unsigned int MODULO = 1e9 + 7;
    // x -> x + 11...1
    //   -> x + 00...0
    //   -> Validate good string
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1, 0);
        dp[0] = 1; // 1 way to make a good string with len = 0
        for(int i = 0 ; i <= high; ++i){
            if(dp[i] == 0) continue;
            if(i + zero <= high) dp[i + zero] = (dp[i + zero] % MODULO) + (dp[i] % MODULO);
            if(i + one <= high) dp[i + one] = (dp[i + one] % MODULO) + (dp[i] % MODULO);
        }
        int cnt = 0;
        for(int i = low ; i <= high; ++i)
            cnt = (cnt % MODULO) + (dp[i] % MODULO);

        return cnt % MODULO;
    }
};