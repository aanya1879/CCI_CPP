#include "linkedlist.h"
#include<iostream>
using namespace std;

//hERE WHEN K=0 AND WHEN K=1, same meaning arises.

int returnkth(LinkedList<int> ll, int k);
int returnkthRec(Node<int>* head, int k);

LinkedList<int> init1(){
    LinkedList<int> ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.push(60);
    ll.print(); 

    return ll;
}

LinkedList<int> init2(){
    LinkedList<int> ll;
    ll.push(10);
    ll.print(); 

    return ll;
}

int main(){
    LinkedList<int> ll = init1();
    int k =6;

    //int result = returnkth(ll, k);
    
    returnkthRec(ll.get(), k);
    int result = -4;
    switch(result){
        case -1: cout<<"Empty ll exception.";
                break;
        case -2: cout<<"k greater than ll length";
                break;
        case -3: cout<<"p== NULL";
                break;
        default: 
                cout<<result;
    }

    cout<<endl;
    return 0;
}

int returnkthRec(Node<int>* head, int k){
    if(head == NULL)
        return 0;

    int index = returnkthRec(head->next, k) + 1;
    if(index == k){
        cout<<head->data;
    }

    return index;
}

int returnkth(LinkedList<int> ll, int k){

    if(ll.get() == NULL)
        return -1;
    
    Node<int>* t= ll.get();
    Node<int>* p= ll.get();

    while(t!= NULL && k>1){
        t=t->next;
        k--;
    }

    if(t==NULL)
        return -2;
        //throw k>ll.length exception
    if(t->next == NULL)
        return p->data;
    
    while(t->next != NULL){
        p=p->next;
        t=t->next;
    }

    if(p!=NULL)
        return p->data;
    else
        return -3;


    return 0;
}