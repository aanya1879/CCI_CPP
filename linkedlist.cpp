#include "linkedlist.h"
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
    
    return 0;
}