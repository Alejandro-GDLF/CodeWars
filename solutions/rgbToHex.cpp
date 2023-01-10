#include <iomanip>
#include <algorithm>

class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b){
    r = r < 0 ? 0 : r;
    r = r > 255 ? 255 : r;
    
    g = g < 0 ? 0 : g;
    g = g > 255 ? 255 : g;
    
    b = b < 0 ? 0 : b;
    b = b > 255 ? 255 : b;
    
    std::stringstream stream;
    stream << std::hex << std::uppercase
      << std::setfill ('0') << std::setw(2) << r 
      << std::setfill ('0') << std::setw(2) << g 
      << std::setfill ('0') << std::setw(2) << b;
    
    return stream.str();
  }
};