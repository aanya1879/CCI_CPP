#include<iostream>
#include<vector>
using namespace std;

void f(vector<int> arr){
    
    int count =0;
    for(int i=0; i<arr.size()-1;) {
        if(arr[i]!= arr[arr[i]-1]) { //we checck if curr value is present at (value at index currVal - 1) Why dont we check if curVal is i+1 ?
            int j = arr[i];
            int t = arr[j-1];
            arr[j-1] = j;
            arr[i] = t;
            count++;
        }
        else
            i++;
            count=0;
    }

    for(int i=0; i<arr.size(); i++){
        cout<<i+1<<" ";
    }
    cout<<endl;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!= i+1)
            cout<<i+1<<" ";
    }
    cout<<endl;
}

int main(){
    
    f({2,4,1,2});
    f({2,3,1,8,2,3,5,1});

}


