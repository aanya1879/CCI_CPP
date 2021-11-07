using namespace std;

#include <iostream>
#include <vector>
#include <unordered_map>

class StringPermutation {
 public:
  static bool findPermutation(const string &str, const string &pattern) {
      
      unordered_map<char, int> umap;
      for(int i=0; i<pattern.length(); i++){
        umap[pattern[i]]++;
        cout<<pattern[i]<<", ";
      }
      cout<<endl;
      for(int wS=0, wE=wS+2; wE<str.length();){
        
        //cout<<str[wS]<<", ";
        while(wS<=wE && umap.find(str[wS]) != umap.end() ){
            //cout<<str[wS]<<", ";
            wS++;
        }
        if(wS>wE){
            //cout<<wS<<", "<<wE<<endl;
            return true;
        }
        else{
            wS++;
            wE=wS+2;
        }
      }

      return false;
  }
};

int main(int argc, char* argv[]) {
  bool result;
  result = StringPermutation::findPermutation("oidbcaf", "abc");
  cout << "Permutation found: " << result << endl;
  result = StringPermutation::findPermutation("aaacb", "abc");
  cout << "Permutation found: " << result << endl;
  result = StringPermutation::findPermutation("odicf", "dc");
  cout << "Permutation found: " << result << endl;
  result = StringPermutation::findPermutation("bcdxabcdy", "bcdyabcdx");
  cout << "Permutation found: " << result << endl;
}
