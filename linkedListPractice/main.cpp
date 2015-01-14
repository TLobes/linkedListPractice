//
//  main.cpp
//  linkedListPractice
//
//  Created by Tim Lobes on 1/12/15.
//  Copyright (c) 2015 Tim Lobes. All rights reserved.
//

#include <iostream>
#include "List.h"

int main() {
    List myList;
    
    myList.AddNode(3);
    myList.AddNode(5);
    myList.AddNode(1);
    myList.AddNode(2);
    myList.AddNode(2);
    myList.AddNode(2);
    myList.AddNode(5);
    myList.AddNode(2);
    
    myList.PrintList();
    
    myList.DeleteNode(1);
    
    myList.PrintList();
    
    myList.DeleteNode(3);
    myList.DeleteNode(2);
    myList.PrintList();
    
    myList.SearchList(2);
    
    myList.GetValueAt(3);
    myList.GetValueAt(10); // Test for larger than list
    
    return 0;
}
