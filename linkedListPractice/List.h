//
//  List.h
//  linkedListPractice
//
//  Created by Tim Lobes on 1/12/15.
//  Copyright (c) 2015 Tim Lobes. All rights reserved.
//

#ifndef __linkedListPractice__List__
#define __linkedListPractice__List__

#include <cstdio>

// Linked List
class List {
private:
    
    typedef struct node {
        int data;
        node* next;
    } * nodePtr; // also typedef struct node* nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public:
    
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
    
};

#endif /* defined(__linkedListPractice__List__) */
