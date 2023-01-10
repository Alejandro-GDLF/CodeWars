#include <cmath>
long int findNextSquare(long int sq) {
  double sqnum = sqrt(sq);
  
  if ( sqnum != int(sqnum) )
    return -1;
  
  return (sqnum+1) * (sqnum+1);
}