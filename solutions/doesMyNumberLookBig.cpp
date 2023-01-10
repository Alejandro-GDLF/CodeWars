#include <cmath>
bool narcissistic( int value ){
  std::string number = std::to_string(value);
  int size = number.size();
  
  int res = 0;
  
  for(int i = 0; i < size; i++)
    res += pow(int(number[i]-'0'), size);
  
  return res == value;
}