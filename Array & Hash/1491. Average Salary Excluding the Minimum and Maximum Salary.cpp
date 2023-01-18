#include <vector>
#include <limits.h>

using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {

        int min = INT_MAX;
        int max = 0;
        int sum = 0;

        for (int i = 0; i < salary.size(); i++)
        {
            if (max < salary[i])
                max = salary[i];

            if (min > salary[i])
                min = salary[i];

            sum += salary[i];
        }
        return double(sum - max - min) / (salary.size() - 2);
    }
};