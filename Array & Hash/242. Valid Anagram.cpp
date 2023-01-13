#include <string>
#include <map>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> s_char_freq;
        map<char, int> t_char_freq;

        for (auto i : s)
        {
            s_char_freq[i]++;
        }

        for (auto x : t)
        {
            t_char_freq[x]++;
        }

        if (s_char_freq.size() == t_char_freq.size())
        {
            auto it1 = s_char_freq.begin(), it2 = t_char_freq.begin();

            while (it1 != s_char_freq.end() && it2 != s_char_freq.end())
            {
                if (it1->first == it2->first && it1->second == it2->second)
                {
                    it1++;
                    it2++;
                }
                else
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            return false;
        }
    }
};