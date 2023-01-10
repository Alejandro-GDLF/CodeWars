#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  std::vector<T> res;
  
  if(iterable.size() == 0 )
    return std::vector<T>();
  
  res.push_back(iterable[0]);
  
  for(T s: iterable){
    if(res.back() != s)
      res.push_back(s);
  }
  
  return res;
}
std::vector<char> uniqueInOrder(const std::string& iterable){
  if(iterable.size() == 0)
    return std::vector<char>();
  
  std::vector<char> res;
  
  res.push_back(iterable[0]);
  
  for(char s: iterable){
    if(res.back() != s)
      res.push_back(s);
  }
  
  return res;
}