#include "linkedlist.h"
#include<iostream>

using namespace std;

class Result{
    public:
        Result(Node<int>* n, bool val): n(n), val(val) {}

        Node<int>* n;
        bool val;
};

LinkedList<int> init1(){
    LinkedList<int> ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(2);
    ll.push(1);
    ll.print(); 

    return ll;
}

LinkedList<int> init2(){
    LinkedList<int> ll;
    ll.push(1);
    ll.push(2);
    ll.print(); 

    return ll;
}


Result isPalindorme(Node<int>* head, int l);

int main(){

    LinkedList<int> ll = init2();

    cout<< isPalindorme(ll.get(), ll.len()).val;
    return 1;
}

Result isPalindorme(Node<int>* head, int l){

    if(l==0 || head == NULL){

        Result r(head, true);
        return r;
        
    }
    else if(l==1){
        Result r(head->next, true);
        return r;

    }

    Result res = isPalindorme(head->next, l-2);

    if(res.n == NULL){
        cout<<"Actually came here"<<endl;
        return res;
    }
    
    if(res.val == false){
        Result r(res.n->next, false);
        return r;
    }

    if(res.n->data == head->data){

        Result r(res.n->next, true);
        return r;
    }
    else{
        Result r(res.n->next, false);
        return r;
    }
    
}