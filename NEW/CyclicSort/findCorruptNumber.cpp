#include<iostream>
#include<vector>
using namespace std;

void f(vector<int> arr){
    
    for(int i=0; i<arr.size();) {
        if(arr[i]!= arr[arr[i]-1]) { //we checck if curr value is present at (value at index currVal - 1) Why dont we check if curVal is i+1 ?
            int t = arr[arr[i]-1];
            arr[arr[i]-1] = arr[i];
            arr[i] = t;
        }
        else{
            i++;}
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<arr.size(); i++){
        if(arr[i]!= i+1){
            cout<<"Duplicated value: "<<arr[i]<<endl;

            cout<<"Missing value: "<<i+1<<endl;
        }
            
    }
    cout<<endl;
}

int main(){
    
    f({2,4,1,2});
    //f({3,1,2,5,2});


    //f({2,3,1,8,2,3,5,1});

}


