#include <algorithm>
#include <set>
#include <climits>
#include <vector>

float find_uniq(const std::vector<float> &v)
{
  int times = INT_MAX;
  float number;
  
  std::set<float> s(v.begin(), v.end());
  
  for(auto it = s.begin(); it != s.end(); it++ )
  {
    int aux = std::count(v.begin(), v.end(), (*it));
    if( aux < times)
    {
      times = aux;
      number = (*it);
    }
  }
  
  return number;
}