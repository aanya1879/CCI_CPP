using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

class T {
 public:
  static vector<vector<int>> searchQuaraples(vector<int> nums, int target) {
      vector<vector<int>> quadraple;
      int s= nums.size();
    sort(nums.begin(), nums.end());
      for(int k=0; k<s-3; k++){
          if(k==0 || nums[k]!= nums[k-1]){
              
              for(int j=k+1; j<s-2; j++){
                  if(j-1 == k || nums[j]!=nums[j-1]){
                    //two sum
                    int find = target - nums[j]-nums[k];
                    int b= j+1, e=s-1;
                    while(b<e){
                        cout<<"\n"<<nums[k]<<", "<<nums[j]<<", "<<nums[b]<<", "<<nums[e];
                        int sum = nums[b]+nums[e];
                        if(sum>=find){
                            if(sum==find){
                                quadraple.push_back({nums[k], nums[j], nums[b], nums[e]});
                                cout<<" => added";
                            }
                                
                            do{
                                e--;
                            }while(b<e&&nums[e]==nums[e+1]);
                        }else {                            
                            do{
                                b++;
                            }while(b<e&&nums[b]==nums[b-1]);
                        }

                    }
                  }
              }
          }
      }

      return quadraple;
  }
};

int main(int argc, char* argv[]) {
  vector<vector<int>> result;
  result = T::searchQuaraples(vector<int>{2, 0, -1, 1, -2, 2}, 2);
  cout<<endl;
  for(int i=0; i<result.size(); i++){
      for(int j=0; j<result[0].size(); j++){
          cout<<result[i][j]<<" ";
      }
      cout<<endl;
  }
  cout<<endl;

  result = T::searchQuaraples(vector<int>{0,0,0,0,0,0}, 0);
  cout<<endl;
  for(int i=0; i<result.size(); i++){
      for(int j=0; j<result[0].size(); j++){
          cout<<result[i][j]<<" ";
      }
      cout<<endl;
  }
  cout<<endl;

}
