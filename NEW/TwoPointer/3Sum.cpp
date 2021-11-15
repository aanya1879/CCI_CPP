#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> f(vector<int> arr) {
    vector<vector<int>> triplets;

    int target, k, sum, s= arr.size();
    sort(arr.begin(), arr.end());
    
    for(k=0; k<arr.size(); k++){
        if(k==0 || arr[k]!=arr[k-1]){
            
            target = 0 -arr[k];
            int b= k+1, e=s-1;
            
            while(b<e){
                sum = arr[b]+arr[e];
                if( sum<target){
                        b++;
                }
                else if(sum>target){
                        e--;
                }
                else if(sum==target){
                    triplets.push_back(vector<int>{arr[k], arr[b], arr[e]});
                    do{
                        b++;
                    }while (b<e && arr[b]==arr[b-1]);
                     do{
                        e--;
                    }while (b<e && arr[e]==arr[e+1]);
                }
            }
            
        }
    }
    
    return triplets;
}

int main(int argc, char* argv[]) {
  vector<vector<int>> result;
  result = f(vector<int>{-3,0,1,2,-1,1,-2});
  for(int i=0; i<result.size(); i++){
      for(int j=0; j<3; j++){
        cout<<result[i][j]<<", ";
      }
      cout<<endl;
  }
  cout<<endl;
  result = f(vector<int>{-3,0,1,2,-1,1,-2});
  for(int i=0; i<result.size(); i++){
      for(int j=0; j<3; j++){
        cout<<result[i][j]<<", ";
      }
      cout<<endl;
  }
  cout<<endl;
}
