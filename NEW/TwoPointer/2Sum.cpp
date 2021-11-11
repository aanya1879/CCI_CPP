using namespace std;

#include <iostream>
#include <vector>
#include <assert.h>
#include <unordered_map>

class PairWithTargetSum {
 public:
  static pair<int, int> search(const vector<int>& arr, int target) {
      pair<int, int> res;

      for(int i=0, j=arr.size()-1; i<j;){
          int f = arr[i], l = arr[j];
          int s = f+l;
          if( s == target){
              res = make_pair(2, j);
              return res;
          }
          if(s>target){
              j--;
          }
          else{
              i++;
          }
      }

      return make_pair(-1,-1);
  }
};

int main(int argc, char* argv[]) {
  pair<int, int> result;
  result = PairWithTargetSum::search(vector<int>{1, 2, 3, 4, 6}, 6); //1, 3
  cout << "First index: " << result.first << " Second index: " << result.second << endl; 

  result = PairWithTargetSum::search(vector<int>{2, 5, 9, 11}, 11); //0, 2 
  cout << "First index: " << result.first << "Second index: " << result.second << endl; 
}
