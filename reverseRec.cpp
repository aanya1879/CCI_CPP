#include "linkedlist.h"
#include<iostream>
using namespace std;

//Node<int>* reverseRec(Node<int>* n, Node<int>* head);
void reverseRec(Node<int>* head);

LinkedList<int> init1(){
    LinkedList<int> ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.push(60);

    return ll;
}

LinkedList<int> init2(){
    LinkedList<int> ll;
    ll.print(); 

    return ll;
}

int main(){
    LinkedList<int> ll = init1();
    ll.print(); 
    
    //Node<int>* newHead = reverseRec(ll.get(), NULL);
     reverseRec(ll.get());
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<newHead->data<<endl; 
    //     newHead=newHead->next;
    // }
    
    //cout<<newHead->data<<endl;    
    //ll.print(newHead);
    return 0;
}

void reverseRec(Node<int>* head){
    if(head!= NULL){
        reverseRec(head->next);
        cout<<head->data<<" ";
    }
        

    //Node<int>* n = reverseRec(head->next, NULL);
    // reverseRec(head->next, NULL);
    // cout<<head->data<<" ";
    // head->next = NULL;
    // n->next = head;

    //return head;
}