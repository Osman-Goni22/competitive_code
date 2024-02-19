bool naive_matching(string text, string pattern) {
  int n = text.size();
  int m = pattern.size();
  for(int i = 0; i < n; i++) { 
    //for each position i in text, we will try 
    //to match text[i, i+1, ..., i+m-1] with pattern[0, 1, ... m-1]
    int j = 0;
    for(j = 0; j < m && i + j < n; j++) { 
      if(text[i + j] != pattern[j]) { 
        break; // mismatch found, break the inner loop
      }
    }
    if(j == m) {
      return true;
    }
  }
  return false;
}
