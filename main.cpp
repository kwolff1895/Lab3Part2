/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kimberly
 *
 * Created on March 12, 2017, 2:32 PM
 */

#include <stdlib.h>
#include<iostream>
#include "LL.hpp"
#include "Node.hpp"

using namespace std;

/*
 * 
 */
int main() {
    LL *list = new LL;
    list->push(2);
    list->Delete(2);
    list->printList();
    return 0;
}

