#include "linkedlist.h"
#include<iostream>
using namespace std;

void sumLists(Node<int>* h1, Node<int>* h2);

LinkedList<int> init1(){
    LinkedList<int> ll;
    ll.push(6);
    ll.push(1);
    ll.push(7);
    ll.print(); 

    return ll;
}

LinkedList<int> init2(){
    LinkedList<int> ll;    
    ll.push(2);
    ll.push(9);
    ll.push(5);
    ll.print();

    return ll;
}

int main(){
    LinkedList<int> ll1 = init1();
    LinkedList<int> ll2 = init2();

    sumLists(ll1.get(), ll2.get());
    return 0;
}

void sumLists(Node<int>* h1, Node<int>* h2, int sum, int carry){
    
    if(h1->next == NULL)
        return h1->data;

    if(h2->next == NULL)
        return h2->data;

    // data = call h1 recursively
    // data = call h2 recusrively
    //
    // sum = data1 + data2+ carry
    // carry = sum/1
    // 
    
}
