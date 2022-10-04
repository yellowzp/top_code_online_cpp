#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        int maxNum = pow(10, n);
        vector<int> v;
        for (int i = 1; i < maxNum; i++) 
        {
            v.push_back(i);
        }
        return v;
    }
};