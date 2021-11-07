using namespace std;

#include <iostream>
#include <string>
#include <unordered_map>

class LongestSubstringKDistinct {
 public:
  static int findLength(const string& str, int k) {
    int maxLength = 0;
    unordered_map<char, int> umap;
    // TODO: Write your code here
    for(int wE=0, wS=0; wE<str.length(); wE++){
      umap[str[wE]]++;
      while(umap.size()>k){
        umap[str[wS]]--;
        if(umap[str[wS]]==0)
          umap.erase(str[wS]);
        wS++;
      }
      maxLength = max(maxLength, wE-wS+1);
    }
    return maxLength;
  }
};
