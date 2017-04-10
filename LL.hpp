/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LL.hpp
 * Author: Kimberly
 *
 * Created on March 12, 2017, 2:33 PM
 */

#ifndef LL_HPP
#define LL_HPP
#include "Node.hpp"
class LL {
 Node *first;
 Node *last;
 int currsize;
 int timestamp;
public:
 LL(); //constructor
 void push(int x); //adds new node to end of list
 void Delete(int i); // removes the ith node from the list
 void printList(); // prints out the entire list
};




#endif /* LL_HPP */

