/*
 Assignment 1: Create a LinkedList Interface | well-written, efficient, and versatile

 Create a Node
 Professor Cook:
 Patrick Shin
 Student ID: 302290287
 
 Create 10 test cases with examples. 
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "linkedList.hpp"
#include "nodeClass.hpp"

using namespace std;

int main(void) {
    
    // Test Case 1:
    cout << "Test Case 1: " << endl;
    LinkedList<int> list1;
    cout << list1.About() << " is the creator." << endl;

    list1.AddHead(10);
    list1.AddHead(20);
    list1.AddHead(30);
    //list1.AddTail(40);
    list1.AddTail(40);
    list1.AddTail(50);
    
    list1.print();
    
    cout << endl;
    cout << "The Top of the List" << endl;
    list1.peek();
    cout << endl;
    
    cout << "The Removal of the head" << endl;
    list1.removeHead();
    list1.print();
    
    cout << endl;
    cout << "Check Contains Function: " << endl;
    if (list1.contains(40))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    cout << "Check isEmpty Function: " << endl;
    if (list1.isEmpty())
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    cout << "Test Case 2: " << endl;
    LinkedList<int> list2;
    cout << list1.About() << " is the creator." << endl;

    list2.AddHead(24);
    list2.AddHead(35);
    list2.AddHead(45);
    //list1.AddTail(40);
    list2.AddTail(532);
    list2.AddTail(21);
    
    list2.print();
    
    cout << endl;
    cout << "The Top of the List" << endl;
    list2.peek();
    cout << endl;
    
    cout << "The Removal of the head" << endl;
    list2.removeHead();
    list2.print();
    
    cout << endl;
    cout << "Check Contains Function: " << endl;
    if (list2.contains(532))
    {
        cout << "Yes: found" << endl;
    }
    else
        cout << "No: not found" << endl;
    
    cout << "Check isEmpty Function: " << endl;
    if (list2.isEmpty())
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    
    cout << "Test Case 3: " << endl;
    LinkedList<int> list3;
    cout << list1.About() << " is the creator." << endl;

    list3.AddHead(23);
    list3.AddHead(2);
    list3.AddHead(330);
    //list1.AddTail(40);
    list3.AddTail(444);
    list3.AddTail(504);
    
    list3.print();
    
    cout << endl;
    cout << "The Top of the List" << endl;
    list3.peek();
    cout << endl;
    
    cout << "The Removal of the head" << endl;
    list3.removeHead();
    list3.print();
    
    cout << endl;
    cout << "Check Contains Function: " << endl;
    if (list3.contains(444))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    cout << "Check isEmpty Function: " << endl;
    if (list3.isEmpty())
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    
    cout << "Test Case 4: " << endl;
    LinkedList<int> list4;
    cout << list4.About() << " is the creator." << endl;

    list4.AddHead(102);
    list4.AddHead(220);
    list4.AddHead(12);
    //list1.AddTail(40);
    list4.AddTail(30);
    list4.AddTail(520);
    
    list4.print();
    
    cout << endl;
    cout << "The Top of the List" << endl;
    list4.peek();
    cout << endl;
    
    cout << "The Removal of the head" << endl;
    list4.removeHead();
    list4.print();
    
    cout << endl;
    cout << "Check Contains Function: " << endl;
    if (list4.contains(520))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    cout << "Check isEmpty Function: " << endl;
    if (list4.isEmpty())
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    
    cout << "Test Case 5: " << endl;
    LinkedList<int> list5;
    cout << list5.About() << " is the creator." << endl;

    list5.AddHead(102);
    list5.AddHead(201);
    list5.AddHead(3033);
    //list1.AddTail(40);
    list5.AddTail(4044);
    list5.AddTail(540);
    
    list5.print();
    
    cout << endl;
    cout << "The Top of the List" << endl;
    list5.peek();
    cout << endl;
    
    cout << "The Removal of the head" << endl;
    list5.removeHead();
    list5.print();
    
    cout << endl;
    cout << "Check Contains Function: " << endl;
    if (list5.contains(40))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    cout << "Check isEmpty Function: " << endl;
    if (list5.isEmpty())
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    
    cout << "Test Case 6: " << endl;
    Node<int> node6(6);
    if (node6.contains(6))
    {
        cout << "Node: ";
        node6.print();
    }
    cout << endl;
    
    cout << "Test Case 7: " << endl;
    Node<int> node7(9);
    if (node7.contains(9))
    {
        cout << "Node: ";
        node7.print();
    }
    cout << endl;
    
    cout << "Test Case 8: " << endl;
    Node<int> node8(77);
    if (node8.contains(74))
    {
        cout << "Node: ";
        node8.print();
    }
    else
    {
        cout << "Wrong search or empty. ";
    }
    cout << endl;
    
    cout << "Test Case 9: " << endl;
    Node<int> node9(101);
    if (node9.contains(110))
    {
        // small outliner issue: does not fully print integer
        cout << "Node: ";
        node9.print();
    }
    else
    {
        cout << "Wrong search or empty. ";
    }
    cout << endl;
    
    cout << "Test Case 10: " << endl;
    Node<int> node10(2);
    if (node10.contains(4))
    {
        // small outliner issue: does not fully print integer
        cout << "Node: ";
        node10.print();
    }
    else
    {
        cout << "Wrong search or empty. ";
    }
    cout << endl;
}

/*

 Test Case 1:
 Enter the author of this code: Author A
 Author A is the creator.
 50 40 10 20 30
 The Top of the List
 30
 The Removal of the head
 50 40 10 20
 Check Contains Function:
 Yes
 Check isEmpty Function:
 No
 
 Test Case 2:
 Enter the author of this code: Author B
 Author B is the creator.
 21 532 24 35 45
 The Top of the List
 45
 The Removal of the head
 21 532 24 35
 Check Contains Function:
 Yes: found
 Check isEmpty Function:
 No
 
 Test Case 3:
 Enter the author of this code: Author 3
 Author 3 is the creator.
 504 444 23 2 330
 The Top of the List
 330
 The Removal of the head
 504 444 23 2
 Check Contains Function:
 Yes
 Check isEmpty Function:
 No
 
 Test Case 4:
 Enter the author of this code: Autho 4
 Autho 4 is the creator.
 520 30 102 220 12
 The Top of the List
 12
 The Removal of the head
 520 30 102 220
 Check Contains Function:
 Yes
 Check isEmpty Function:
 No
 
 Test Case 5:
 Enter the author of this code: Author 4
 Author 4 is the creator.
 540 4044 102 201 3033
 The Top of the List
 3033
 The Removal of the head
 540 4044 102 201
 Check Contains Function:
 No
 Check isEmpty Function:
 No
 
 Test Case 6:
 Node: 6
 
 Test Case 7:
 Node: 9
 
 Test Case 8:
 Node: 77
 
 Test Case 9:
 Node:
 
 Test Case 10:
 Node:
 
 Program ended with exit code: 0
 */
