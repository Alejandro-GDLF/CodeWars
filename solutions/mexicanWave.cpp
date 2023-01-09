#include <vector>
#include <string>

char toUpper(char c)
{ 
  return char( int(c) - int('a') + int('A'));
}

std::vector<std::string> wave(std::string y){
  std::vector<std::string> v;
  int size = y.size();
  
  for(int i = 0; i < size; i++)
  {
    if(!std::isalpha(y[i]))
      continue;
    
    std::string s(y);
    
    s[i] = toUpper(s[i]);
    
    v.push_back(s);
  }  
  
  return v;
}