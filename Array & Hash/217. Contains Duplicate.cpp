#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        for (auto x : nums)
        {
            freq[x]++;
        }

        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            if (it->second >= 2)
                return true;
        }
        return false;
    }
};

