/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.hpp
 * Author: Kimberly
 *
 * Created on March 12, 2017, 2:32 PM
 */

#ifndef NODE_HPP
#define NODE_HPP

class Node {
friend class LL;
int data;
Node *next;
Node *prev;
public:
Node(int x);
void printNode();
};

#endif /* NODE_HPP */

