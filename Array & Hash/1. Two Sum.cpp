#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> indicies;
        vector<int> two_sum;
        int key;

        for (int i = 0; i < nums.size(); i++)
        {
            key = target - nums[i];
            if (indicies.count(key) > 0)
            {
                two_sum.push_back(indicies[key]), two_sum.push_back(i);
                return two_sum;
            }
            indicies[nums[i]] = i;
        }
        return two_sum;
    }
};
