/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Node.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

Node::Node(int x) {
data = x;
next = NULL;
prev = NULL;
}
void Node::printNode() {
//cout << "|D:"<< data << " P:" << priority << "|";
return;
}
