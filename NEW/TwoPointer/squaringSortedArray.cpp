#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> makeSquares(const vector<int>& arr) {
    int s =arr.size();
    vector<int> sqs;

    int n, p, nsq, psq;
    for(p=0; p<s; p++){
        if(arr[p]>=0)
            break;
    }
    n=p-1;

    while(n>=0 && p<s){
        nsq = arr[n]*arr[n];
        psq= arr[p]*arr[p];
        if(nsq<psq){
            sqs.push_back(nsq);
            n--;
        }
        else{
            sqs.push_back(psq);
            p++;
        }
    }
    if(n==-1){
        while(p<s){
            psq= arr[p]*arr[p];
            sqs.push_back(psq);
            p++;
        }
    }

    if(p==s){
        while(n>=0){
            nsq = arr[n]*arr[n];
            sqs.push_back(nsq);
            n--;
        }
    }

    return sqs;
}

int main(int argc, char* argv[]) {
  vector<int> result;
  result = makeSquares(vector<int>{-2,-1,0,2,3});
  cout << "Values in vector: " << endl;
  for(int i=0; i<result.size(); i++)
    cout<<result[i]<<" ";
  cout<<endl;

  result = makeSquares(vector<int>{-3, -1, 0, 1, 2});
  cout << "Values in vector: " << endl;
  for(int i=0; i<result.size(); i++)
    cout<<result[i]<<" ";
  cout<<endl;
  
}
