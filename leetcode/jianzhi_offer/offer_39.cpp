#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // 摩尔投票法
        int candidate;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                candidate = nums[i];
                count++;
            }
            else
            {
                if (nums[i] == candidate)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return candidate;
    }
};