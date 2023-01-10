bool is_isogram(std::string str) {
  
  for(size_t i = 0; i < str.size(); i++)
    if( str.find( char( std::tolower(str[i])), i+1 ) != std::string::npos 
        ||
        str.find( char( std::toupper(str[i]) ), i+1 ) != std::string::npos 
      )
      return false;
  
  return true;
}