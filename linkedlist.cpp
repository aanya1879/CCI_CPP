#include "linkedlist.h"
#include<iostream>
using namespace std;


int main(){
    LinkedList<int> ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(30);
    ll.push(10);
    ll.print();
    
    return 0;
}