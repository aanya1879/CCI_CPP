using namespace std;

#include <iostream>
#include <vector>
#include <unordered_map>

class RemoveDuplicates {
 public:
  static void remove(const vector<int>& arr) {
      int prev = arr[0];

      for(int it = 1; it<arr.size(); it++){
          if(arr[it] == prev){
              arr.erase(arr.begin());
          }
          prev=arr[it];
      }
  }
};

int main(int argc, char* argv[]) {
    vector<int> v = {2,3,3,3,6,9,9};
    RemoveDuplicates::remove(v); 
    for(int i=0; i<v.size(); i++)
        cout << v[i]<<", ";
    cout<< endl;
    
    v = {2,2,2,11};
    RemoveDuplicates::remove(v); 
    for(int i=0; i<v.size(); i++)
        cout << v[i]<<", ";
    cout<< endl;
}
