using namespace std;

#include <iostream>
#include <vector>
#include <unordered_map>

class DutchFlag {
 public:
  static void sort(vector<int>& arr) {

    int l=0, r=arr.size()-1;
    //for 0's
    for( r=arr.size()-1; l<r; ){
        while(l<r && arr[l]==0){
            l++;
        }
        while(l<r && arr[r]!=0){
            r--;
        }
        if(arr[r]==0){
            int t=arr[l];
            arr[l]=arr[r];
            arr[r]=t;
            l++;
        }
        
    }
    for(int i=0; i<arr.size();i++){
          cout<<arr[i]<<", ";
    }
    cout<<endl;
    //for 1's
    for( r=arr.size()-1; l<r; ){
        while(l<r && arr[l]==1){
            l++;
        }
        while(l<r && arr[r]!=1){
            r--;
        }
        if(arr[r]==1){
            int t=arr[l];
            arr[l]=arr[r];
            arr[r]=t;
            l++;
        }
        
    }

    for(int i=0; i<arr.size();i++){
          cout<<arr[i]<<", ";
    }
    cout<<endl;
  }
};

int main(int argc, char* argv[]) {
  vector<int> input;
  input = vector<int>{1, 0, 2, 1, 0};
  DutchFlag::sort(input);
}
