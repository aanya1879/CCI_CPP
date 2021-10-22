#include "linkedlist.h"
#include<iostream>
using namespace std;

void sumLists(LinkedList<int> ll1, LinkedList<int> ll2);

LinkedList<int> init1(){
    LinkedList<int> ll;
    ll.push(7);
    ll.push(1);
    ll.push(6);
    ll.print(); 

    return ll;
}

LinkedList<int> init2(){
    LinkedList<int> ll;    
    ll.push(6);
    ll.push(5);
    ll.push(9);
    ll.push(2);
    ll.print();

    return ll;
}

int main(){
    LinkedList<int> ll1 = init1();
    LinkedList<int> ll2 = init2();

    sumLists(ll1, ll2);
    return 0;
}

void sumLists(LinkedList<int> ll1, LinkedList<int> ll2){
    
    // if(ll1.get()==NULL or ll2.get()==NULL)
    //     cout<<"One of the linked lists is null";
    
    // if(ll1.len() != ll2.len())
    //     cout<<"Lengths not equal";

    cout<<ll1.len()<<endl;
    cout<<ll2.len()<<endl;
    
    int sum =0, carry=0;
    Node<int>* h1 = ll1.get();
    Node<int>* h2 = ll2.get();
    LinkedList<int> ll;

    sum = h1->data + h2->data + carry;
    cout<<h1->data<<"+"<<h2->data<<"+"<<carry<<"= "<<sum<<endl;
    carry = sum/10;
    sum = sum%10;
        ll.push(sum);
        ll.print();
    while(h1->next!=NULL || h2->next!=NULL){
        sum =0;
        if(h1->next!=NULL){
            h1=h1->next;
            sum = h1->data;
        }

        if(h2->next!=NULL){
            h2=h2->next;
            sum = sum + h2->data;
        }

        sum = sum + carry;

        //cout<<h1->data<<"+"<<h2->data<<"+"<<carry<<"= "<<sum<<endl;
        carry = sum/10;
        sum = sum%10;
        ll.push(sum);
        ll.print();
    }

    if(carry!=0){
        ll.push(carry);
    }

    ll.print();



}
