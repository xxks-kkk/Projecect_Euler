#include <map>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target){
  int len = numbers.size();
  map<int, int> map;
  for (int i=0; i < len; i++)
  {
    int x = numbers[i];
    if (map.find(target-x) != map.end())
    {
      return {map.find(target-x)->second + 1, i+1};
    }
    map[numbers[i]] = i;
  }
  throw std::runtime_error("No two sum solution");
}
