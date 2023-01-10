std::string decodeMorse(std::string morseCode) {
    std::string decoded;
    size_t current, previous;
  
    previous = morseCode.find_first_not_of(' ');
    current = morseCode.find(' ', previous);
  
    while(current != std::string::npos){
      if(current == previous){
        decoded += " ";
        previous = current + 2;
        
        current = morseCode.find(' ', previous);
        continue;
      }
      
      decoded += MORSE_CODE[morseCode.substr(previous, current-previous)];
      
      previous = current + 1;
      
      current = morseCode.find(' ', previous);
    }
  
    decoded += MORSE_CODE[morseCode.substr(previous, morseCode.size() - previous )];
  
    return decoded.substr(0, decoded.find_last_not_of(' ')+1);
}