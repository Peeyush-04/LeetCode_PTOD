#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
  {
    vector<int> result;
    int rows = queries.size();

    for (int i = 0; i < rows; i++)
    {
      int instance_result = arr[queries[i][0]];
      for (int j = queries[i][0]; j <= queries[i][1] - 1;
           ++j)
      {
        instance_result ^= arr[j + 1];
      }
      result.push_back(instance_result);
    }
    return result;
  }
};