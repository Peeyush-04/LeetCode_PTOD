#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  int countConsistentStrings(string allowed, vector<string> &words)
  {
    // using unordered_set for better time complexity
    unordered_set<char> allowedSet(allowed.begin(), allowed.end());

    int count = 0;
    for (string word : words)
    {
      bool isconsistant = true;
      for (char character : word)
      {
        if (allowedSet.find(character) == allowedSet.end())
        {
          isconsistant = false;
          break;
        }
      }
      if (isconsistant)
      {
        count++;
      }
    }

    return count;
  }
};
