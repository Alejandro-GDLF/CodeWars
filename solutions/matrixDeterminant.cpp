#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> buildComplement(vector< vector<long long> > m, unsigned int i, unsigned int j)
{
  vector< vector<long long> > res;
  
  for(unsigned int _i = 0; _i < m.size(); _i++)
  {
    if(_i == i)
      continue;
    res.emplace_back(vector<long long>{});
    for(unsigned int _j = 0; _j < m[_i].size(); _j++)
    {
      if(_j == j )
        continue;
      res.back().push_back(m[_i][_j]);
    }
  }
  
  return res;
}

long long determinant(vector< vector<long long> > m) {
  if(m.size() == 1 && m[0].size() == 1)
    return m[0][0];
  
  if(m.size() == 2 && (m[0].size() == 2 || m[1].size() == 2))
    return m[0][0] * m[1][1] - m[1][0] * m[0][1];
  
  long long sum = 0;
  for(unsigned int i = 0; i < m.size(); i++)
      sum += ((1+i) % 2 == 0 ? 1 : -1) * m[1][i] * determinant(buildComplement(m, 1, i));
  
  return sum;
      
}