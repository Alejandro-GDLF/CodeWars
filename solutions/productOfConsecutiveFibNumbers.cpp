#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod);
};

std::vector<ull> ProdFib::productFib(ull prod){
  ull previous = 0;
  ull next = 1;
  ull res;
  
  while((res = previous * next) < prod ) {
    std::swap(next, previous);
    next +=previous;
  }
  
  return {previous, next, res == prod};
}