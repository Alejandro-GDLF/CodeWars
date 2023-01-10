#include <map>

std::map<char, char> swap {
  {'A', 'T'},
  {'T', 'A'},
  {'G', 'C'},
  {'C', 'G'}
};

std::string DNAStrand(std::string dna)
{
  for( char& ch: dna )
    ch = swap.at(ch);
  
  return dna;
}