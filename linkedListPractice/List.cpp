//
//  List.cpp
//  linkedListPractice
//
//  Created by Tim Lobes on 1/12/15.
//  Copyright (c) 2015 Tim Lobes. All rights reserved.
//

#include <iostream>
#include "List.h"

List::List() {
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
}

void List::AddNode(int addData) {
    nodePtr n = new node;
    
    n->next = nullptr;
    n->data = addData;
    
    if (head != NULL)
    {
        curr = head; // Start at head
        while (curr->next != NULL)
        {
            curr = curr->next; // Advance to end of the list
        }
        curr->next = n; // Set current node as the tail
    }
    else
    {
        head = n; // If new list, set current node as the head
    }
}

void List::DeleteNode(int delData) {
    nodePtr delPtr = nullptr;
    temp = head;
    curr = head;
    
    // Find the data
    while (curr->next != NULL && curr->data != delData) {
        temp = curr; // Advance our trailing temp
        curr = curr->next; // Advanced our current selector
    }
    
    if (curr == NULL) {
        std::cout << delData << " was not found.\n";
        delete delPtr; // Garbage collection
    }
    else if (curr == head)
    {
        delPtr = head;
        head = head->next;
        delete delPtr;
        
        std::cout << "Value " << delData << " was deleted\n";
    }
    
    else {
        delPtr = curr; // Point delete selector to the current
        curr = curr->next; // advance current to the next ndoe
        temp->next = curr;
        delete delPtr; // Delete node delPtr is pointing to
        
        std::cout << "Value " << delData << " was deleted\n";
    }
    
}

void List::PrintList() {
    curr = head;
    while (curr != NULL)
    {
        std::cout << curr->data << std::endl;
        curr = curr->next;
    }
}

void List::SearchList(int searchData) {
    nodePtr curr = head;
    int count = 0;
    
    if (curr == NULL)
        std::cout << "List is empty\n";
    else {
        while (curr != NULL)
            // At the tail, no data found
            if (curr->data != searchData && curr->next == NULL)
                std::cout << searchData << " was not found.\n";
        else {
            if (curr->data == searchData)
                std::cout << "Value " << searchData << " was found at node " << count << std::endl;
            
            curr = curr->next;
            count++;
        }
    }
}

void List::GetValueAt(unsigned int n) {
    curr = head;
    int count = 0;
    
    while (curr != NULL) {
        if (curr->next == NULL && count < n) {
            std::cout << "List is only " << count + 1 << " nodes long\n";
            curr = nullptr; // Break loop
        }
        else if (count == n) {
            std::cout << "Value at node position " << n << " is " << curr->data << std::endl;
            curr = nullptr; // Break loop
        }
        else {
            curr = curr->next;
            count++;
        }
    }
}