#include <iostream>
#include <bitset>

using namespace std;

class Solution
{
public:
  int minBitFlips(int start, int goal)
  {
    int count = 0;
    bitset<30> first(start);
    bitset<30> last(goal);
    for (int i = 29; i >= 0; --i)
    {
      if (first[i] != last[i])
        count++;
      else
        continue;
    }

    return count;
  }
};

int main()
{

  int start, goal, rep;
  cin >> rep;

  while (rep--)
  {
    cin >> start >> goal;

    Solution obj;

    cout << obj.minBitFlips(start, goal) << endl;
  }

  return 0;
}