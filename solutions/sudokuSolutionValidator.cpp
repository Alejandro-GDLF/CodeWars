bool checkRows(unsigned int board[9][9]){
  for(int i = 0; i < 9; i++){
    bool check_v[10] = {true, true, true, true, true, true, true, true, true, true};
    for(int j = 0; j < 9; j++){
      if(board[i][j] == 0)
        return false;
      
      if(check_v[board[i][j]])
        check_v[board[i][j]] = false;
      else
        return false;
    }
  }
  
  return true;
}

bool checkColumns(unsigned int board[9][9]){
  for(int j = 0; j < 9; j++){
    bool check_v[10] = {true, true, true, true, true, true, true, true, true, true};
    for(int i = 0; i < 9; i++){
      
      if(check_v[board[i][j]])
        check_v[board[i][j]] = false;
      else
        return false;
    }
  }
  
  return true;
}

bool checkBlock(unsigned int board[9][9]){
  for(int v_block = 0; v_block < 3; v_block++)
    for(int h_block = 0; h_block < 3; h_block++){
      bool check_v[10] = {true, true, true, true, true, true, true, true, true, true};
      for(int i = h_block*3; i < h_block*3+3; i++)
        for(int j = v_block*3; j < v_block*3+3; j++){
          if(check_v[board[i][j]])
            check_v[board[i][j]] = false;
          else
            return false;
        }
    }
  return true;
}

bool validSolution(unsigned int board[9][9]){
  
   return checkRows(board) && checkColumns(board) && checkBlock(board);
}