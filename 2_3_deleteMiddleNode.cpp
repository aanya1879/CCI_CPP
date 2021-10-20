#include "linkedlist.h"
#include<iostream>
using namespace std;

void partition(LinkedList<int> ll, int p);
LinkedList<int> init1(){
    LinkedList<int> ll;
    ll.push(60);
    ll.push(50);
    ll.push(40);
    ll.push(30);
    ll.push(20);
    ll.push(10);
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
    
    int p = 30;
    partition(ll, p);
    ll.print();
    
    return 0;
}

void partition(LinkedList<int> ll, int p){

    Node<int>* head = ll.get();
    int count=0;
    while(head->next != NULL){
        head=head->next;
        count++;
    }
    count++;
    Node<int>* tail = head;
    head = ll.get();
    Node<int>* t = head;
    cout<<count<<endl;
    for(;t->next!=NULL && count>0; count--){
        Node<int>* temp = new Node<int>(t->data);
        if(t->data>=p){
            //insert after tail
            tail->next = temp;
            tail= tail->next;
            //delete current;
            if(t==head){
                t=t->next;
                head=head->next;
            }
            else{
                t->data=t->next->data;
                t->next=t->next->next;
            }
            ll.print(head);
        }
        else{
            //insert at head;
            temp->next = head;
            head = temp;
            t->data=t->next->data;
            t->next=t->next->next;
            ll.print(head);
        }

    }
    if(t== tail && t->data<p){
        while(t->next->next!= NULL){
            t=t->next;
        }
        t->next = NULL;
    }
    //ll.set(head);
    ll.print(head);
    cout<<"exit";
}