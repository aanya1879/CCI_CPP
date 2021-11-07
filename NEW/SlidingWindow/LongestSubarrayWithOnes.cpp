using namespace std;

#include <iostream>
#include <vector>

class ReplacingOnes {
 public:
  static int findLength(const vector<int>& arr, int k) {
      int maxLength =0;
      int onescount=0;

      for(int wS=0, wE=0; wE<arr.size(); wE++){
          int i = arr[wE];
          if(i==1)
            onescount++;
        if(wE-wS+1 - onescount > k){
            if(arr[wS]==1)
                onescount--;
            wS++;
        }
        maxLength = max(maxLength, wE-wS+1);
        cout<<maxLength<<"->";
      }      

      return maxLength;
  }
};

int main(int argc, char* argv[]) {
  int result;
  result = ReplacingOnes::findLength(vector<int>{0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1},2);
  cout << "Max length: " << result << endl;
  result = ReplacingOnes::findLength(vector<int>{0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1},3);
  cout << "Max length: " << result << endl;
}
