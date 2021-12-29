#include<iostream>
#include<vector>
using namespace std;

void f(vector<int> arr){
    for(int i=0; i<arr.size()-1;) {
        if(arr[i]!= i+1) {
            int j = arr[i];
            int t = arr[j-1];
            arr[j-1] = j;
            arr[i] = t;
        }
        else
            i++;
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    f({2,3,1,4,5,6});
    f({1,2,3,5,4,7,6});
    //f({});

}


