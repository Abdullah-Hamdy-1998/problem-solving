#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs)
  {
    string str;
    vector<vector<string>> a;
    unordered_map<string, vector<string>> anagrams;
    vector<vector<string>> anagrams_vector;

    for (int i = 0; i < strs.size(); i++)
    {
      str = strs[i];
      sort(str.begin(), str.end());
      anagrams[str].push_back(strs[i]);
    }

    for (const auto &[key, value] : anagrams)
    {
      anagrams_vector.push_back(value);
    }

    return anagrams_vector;
  };
};