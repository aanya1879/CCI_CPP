#include "node.h"
#include<iostream>

template <typename T> Node<T>::Node() : data(1) { }

template <typename T> Node<T>::Node(T d) : data(d) { }



// template <typename T> class Node {
//     public:
//         Node(T d){
//             data = d;
//         }

//         // void push(T d){
//         //     Node end = new Node(d);

//         //     Node p = this;
//         //     while(n.next!=null){
//         //         n= n->next;
//         //     }
//         //     n.next = end;
//         // }

//         Node next = null;
//         T data;


// };