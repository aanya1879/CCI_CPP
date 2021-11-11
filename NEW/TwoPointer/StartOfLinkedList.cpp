#include "../../linkedlist.h"
#include<iostream>
using namespace std;

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
    ll.print(); 

    return ll;
}

int getLen(Node<int>* head){
    int len=0;
    Node<int>* fp= head;
    Node<int>* sp= head;

    while(fp!=NULL && fp->next!=NULL and sp!=NULL){
        fp=fp->next->next;
        sp=sp->next;
        if(sp==fp){
            len++;
            sp=sp->next;
            while(sp!=fp){
                sp=sp->next;
                len++;
            }
            return len;
        }
    }

    return -1;
}

Node<int>* findCycleStart(Node<int>* head){
    int len = getLen(head);
    cout<<"Len of cycle is "<<len<<endl;
    Node<int>* first= head;
    Node<int>* second= head;

    while(len>0){
        first=first->next;
        len--;
    }
    cout<<"First at: "<<first->data<<endl;
    while(first!=second){
        first=first->next;
        second=second->next;
    }

    return first;
}

int main(){
    LinkedList<int> ll = init1();
    Node<int>* l =ll.last();
    Node<int>* p =ll.get();
    l->next = p->next->next;
    
    Node<int>* node = findCycleStart(ll.get());
    cout<<"Start of cycle is "<<node->data;
    return 0;
}