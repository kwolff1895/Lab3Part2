/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Node.hpp"
#include "LL.hpp"
LL::LL() {
first = NULL;
last = NULL;
currsize = 0;
}
void LL::push(int x) {
// this function creates a new Node, then adds the node to the end of the list and updates //the last pointer.
//Note: you’ll want to check to see if this is the very first node being added to the list, //in which case you’ll want to
//create the new node, and then make sure that both the first //and the last pointer point to it.
    Node *node = new Node(x);
    if (first == NULL){
        first = node;
    }
    else{
        node=first;
        first = node;
    }
}
void LL::Delete(int i) {
// this method starts at the first node in the list and counts to i-1. It then deletes the //node at location i. Note that
//you must make node at i-1 point to node at i+1, and you //must decrease the size of the list. If you are deleting the
//0th element, you must first //set first to the node at 2 before deleting node 1. Equally, if you are deleting the last
//node, you must make the new last node be the node at i-1.
//You must delete your node at i.
    if (i <currsize){
        Node *temp = first;
        for (int j = 0; j<i-1;j++){
            temp = temp->next;
        }
        
        Node *temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next->prev = temp;
        temp2->next = NULL;
        temp2->prev=NULL;
        delete temp2;
        currsize--;
    }
    
}
void LL::printList() {
    Node *temp = first;
    while (temp != NULL){
        cout<< temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
// Make sure you can write a method that prints out every node in the linked list
}
