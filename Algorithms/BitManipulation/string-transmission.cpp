#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

#define MAX_LEN 1001

#define MOD 1000000007
inline int mod(int num)
{
    return (num % MOD + MOD) % MOD;
}

int main()
{
    //    Pascal's Triangle to compute Cr(n, k)
    vector<vector<int>> cr(MAX_LEN, vector<int>(MAX_LEN, 0));
    cr[0][0] = 1;
    for(int i = 1; i < MAX_LEN; i ++)
    {
        cr[i][0] = 1;
        for (int j = 1; j <= i; j ++)
            cr[i][j] = mod(cr[i - 1][j - 1] + cr[i - 1][j]);
    }
    
    //
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        string str; cin >> str;
        int len = str.length();

        //    Original total: SUM(Cr(n, 0), Cr(n, 1), Cr(n, 2),.. Cr(n, k))
        int ret = 0;
        for (int i = 0; i <= k; i ++)
            ret = mod(ret + cr[len][i]);

        //    Get all divisors
        vector<int> divisor;
        for (int d = 1; d < len; d ++)
            if (len % d == 0)    divisor.push_back(d);

        bool bSelfRepeated = false;

        //    DP
        vector<vector<int>> dp(divisor.size(), vector<int>(MAX_LEN + k, 0));

        //    For each divisor..
        for (int id = 0; id < divisor.size(); id ++)
        {
            int d = divisor[id];

            /*
             *    Original DP:
             *    DP[substr_ending_index][corrupted bits no.] = no. of repeated string, where
             *        DP[len + 1][cnt + zeroCnt] += DP[len][cnt]                    "For flipping 0s"
             *        DP[len + 1][cnt + len / divisor - zeroCnt] += DP[len][cnt]    "For flipping 1s"
             *
             *    Idea is like this: for a repeated string [pattern]+, all terms above are for pattern only
                len is the ending substr index into pattern. We check index by index within this pattern.
                For each divisor-th sequence, (i, i + d, i + 2d..), we can simply flip the zeros in it to make 
                chars at (i, i + d, i + 2d..) identical to all 1, and so does for flipping 1s (2nd equation above).

                Now, let's check DP state at index (i + 1). Say at index i (i + 1, i + 1 + d, i + 1 + 2d..), number 
                of zeros is zeroCnt, then the cnt of dp[i + 1] can be built upon dp[i], for each of (0..k) of course
                Since each index is independent with each other, it is simply "+" upon the previous count.
             *
             *    If you want to get 100% pass, you have to apply rolling array optimization, as below
             */        

            //    DP Start            
            dp[id][0] = 1;
                        
            for (int j = 0; j < d; j ++)
            {
                //    Counting ZEROs
                int zeroCnt = 0;
                for (int i = j; i < len; i += d)
                    if(str[i] == '0') zeroCnt ++;

                vector<int> pre = dp[id];
                std::fill(dp[id].begin(), dp[id].end(), 0);

                for (int i = 0; i <= k; i ++)
                {
                    if (pre[i] > 0)
                    {
                        dp[id][i + zeroCnt]         = mod(dp[id][i + zeroCnt]         + pre[i]);    // for flipping 0s
                        dp[id][i + len/d - zeroCnt] = mod(dp[id][i + len/d - zeroCnt] + pre[i]);    // for flipping 1s
                    }
                }
            }

            if (dp[id][0] > 0) bSelfRepeated = true;

            //    Avoid duplicated counting
            for (int pid = 0; pid < id; pid ++)
                if(d % divisor[pid] == 0)
                    for(int i = 0; i <= k; i ++)    dp[id][i] = mod(dp[id][i] - dp[pid][i]);

            //    Repeated string number counting done.
            //    Now removing no. of repeated pattern strings
            for(int i = 1; i <= k; i ++)
                ret = mod(ret - dp[id][i]);
        }

        //    If input str itself is in repeated pattern..
        if (bSelfRepeated)    ret = mod (ret - 1);

        cout << ret << endl;
    }// while(t--)
    return 0;
}
