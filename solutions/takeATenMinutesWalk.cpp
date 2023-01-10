#include<vector>
#include<iostream>

bool isValidWalk(std::vector<char> walk) {
  int v = 0, // Offset in vertical axis
      h = 0, // Offset in horizontal axis
      dist = 0; // Overall distance traveled
  
  for (const char c: walk){
    switch(c){
        case 'n':
          v++;
          break;
        case 's':
          v--;
          break;
        case 'e':
          h--;
          break;
        case 'w':
          h++;
    }
    dist++;
  }
  // If the offsets are 0 that mean you got to the same spot you were before
  if(v == 0 && h == 0 && dist == 10)
    return true;
  else
    return false;
}