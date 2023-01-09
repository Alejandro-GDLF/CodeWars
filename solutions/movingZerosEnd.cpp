#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> v;
  int num_zeros = 0;
  
  for( auto it = input.begin(); it != input.end(); it ++)
    if( (*it) == 0 )
      num_zeros++;
    else
      v.push_back(*it);
  
  for ( int i = 0; i < num_zeros; i++)
    v.push_back(0);
  
  return v;
}