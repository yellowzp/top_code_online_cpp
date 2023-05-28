#include<iostream>
// #include<math.h>
#include<vector>
using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        vector <int> dp(n + 1);
        for (int i = 2; i <= n; i++) {
            int curMax = 0;
            for (int j = 1; j < i; j++) {
                curMax = max(curMax, max(j * (i - j), j * dp[i - j]));
            }
            dp[i] = curMax;
        }
        return dp[n];
    }
};

int main() {
    int input = 10;
    Solution s;
    cout << s.cuttingRope(input) << endl;
    getchar();
    return 0;
}