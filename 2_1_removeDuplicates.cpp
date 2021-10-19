#include "linkedlist.h"
#include<iostream>
#include<unordered_set>
using namespace std;

LinkedList<int> init1(){
    LinkedList<int> ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(30);
    ll.push(10);

    return ll;
}

LinkedList<int> init2(){
    LinkedList<int> ll;
    ll.push(10);

    return ll;
}

LinkedList<int> init3(){
    LinkedList<int> ll;

    return ll;
}

int main(){
    LinkedList<int> ll = init3();
    ll.print();
    Node<int>* p  = ll.get();
    Node<int>* prev = NULL;
    // ## Solution 1 ##
    //create unordered hashmap
    unordered_set<int> uset;
    
    if(p == NULL){
        cout<<"empty LL"<<endl;
        return 0;
    }
    //add into umap, if already exisits delete(skip) node.
    while(p->next!=NULL){
        if(uset.find(p->data) == uset.end()){
            //not found
            uset.insert(p->data);
            prev = p;
            p=p->next;
        }
        else{
                p->data = p->next->data;
                p->next = p->next->next;
        }
    }

    if(p->next == NULL){
        if(uset.find(p->data) != uset.end())
            prev->next = NULL;
    }
                
    //print ll  
    ll.print();

    
    return 0;
}