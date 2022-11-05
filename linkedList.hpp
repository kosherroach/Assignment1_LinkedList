//
//  linkedList.hpp
//  Assignment_1_PS
//
//  Created by P S on 9/16/22.
//

#ifndef linkedList_hpp
#define linkedList_hppw

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

template<class T>
struct NodeType
{
    T item; // Data
    NodeType<T> *link; // Link to the next node in the list
};

template<class T>
class LinkedList
{
private:
    NodeType<T> *head;
    NodeType<T> *tail;
    
public:
    LinkedList();
    //~LinkedList();
    string About(); // Returns text about you - the author of this class
    void AddHead(T value); // Adds an object to the head of the list
    void AddTail(T value); // Adds an object to the tail of the list
    string removeHead(); // Removed an object from the head of the list. If the list is empty, return empty
    string peekHead(); // Returns the value from the head of the list
    bool contains(T value);
    void print(); // print library
    bool isEmpty();
    
    // Helper Functions.
    void peek();
    // Removal
    void remove();
    
    void RevPrint(NodeType<T> *head);
    bool searchRec(NodeType<T> *curr, T val);

};

template<class T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    tail = NULL;
}

// Changed the string to void <--- Error!
template<class T>
void LinkedList<T>::peek()
{
    T firstElement;
    firstElement = head->item;
    cout << firstElement << " ";
}

template<class T>
string LinkedList<T>::peekHead()
{
    peek();
    
    return " ";
}

// changed the string to void <--- Error!
template<class T>
void LinkedList<T>::remove()
{
    NodeType<T> *tempPtr = head;
    
    head = head->link;
    
    delete tempPtr;
}

template<class T>
string LinkedList<T>::removeHead()
{
    
    remove();
    
    return " ";
}

template<class T>
string LinkedList<T>::About()
{
    string name;
    cout << "Enter the author of this code: ";
    getline(cin, name);
    return name;
}

//int value
template<class T>
void LinkedList<T>::AddHead(T value)
{
    // Pointer to the new node.
    NodeType<T>* add = new NodeType<T>;
    
    // Stores the info the new node.
    add->item = value;
    
    // Inserts the node before the current first node and connects them.
    add->link = head;
    
    // Links to the next node
    head = add;
    
    if (tail == NULL)
    {
        tail = add;
    }
    
    
    
    
    /*
     if (head == NULL)
     {
     add->item = value;
     add->link = head;
     add = head;
     }
     
     
     
     Psuedocode from Professor:
     
     NodeType<string> add = new NodeType<string>; // Create a new node
     
     if (list == NULL) // is Head NUll
     head->value = add; // Link both and tail to the new node
     tail->value = add;
     else
     add->next = head; // Link the new node to the head
     head = add;
     */
}

template<class T>
void LinkedList<T>::AddTail(T value)
{
    NodeType<T> *add = new NodeType<T>;
    
    // Add value to the list.
    add->item = value;
    
    // New link to the list.
    add->link = NULL;
    
    if (head == NULL)
    {
        head = add;
        tail = add;
    }
    else
    {
        tail->link = add;
        
        tail = add;
    }
        /*
         Psuedocode from Professor:
        
         // Wrong Code?!
         
         NodeType<string> add = new NodeType<string>; // Create a new node;
         
            if (list == NULL) // is HEAD NULL?
                head->value = add; // link both head and tail to the new node
                tail->value = add;
            else
                tail->next = add; // Link the next node after the head?
                tail = add;
         
         */
}


// Recursive call to the print function

template<class T>
void LinkedList<T>::RevPrint(NodeType<T> *head)
{
    if (head != NULL)
    {
        RevPrint(head->link);
        
        cout << head->item << " ";
    }
}
 
template<class T>
void LinkedList<T>::print()
{
    if(head != NULL)
    {
        RevPrint(head);
    }
    else
    {
        cout << "Empty Linked List" << endl;
    }
}

// Error<- Missing Recursion.

/*
template<class T>
void LinkedList<T>::print()
{
    NodeType<T> *current;
    
    current = head;
    
    while(current != NULL)
    {
        cout << current->item << " ";
        
        current = current->link;
    }
}
*/

// Error <- Missing Recursion.
template<class T>
bool LinkedList<T>::searchRec(NodeType<T> *curr, T val)
{
    if (curr == NULL)
    {
        return false;
    }
    else if (curr->item == val)
    {
        return true;
    }
    
    return searchRec(curr->link, val);
}

template<class T>
bool LinkedList<T>::contains(T val)
{
    /*
     NodeType<T> *currPtr;
     
     // currPtr = head;
     
     if (head == NULL)
     {
     cout << "Cannot search an empty list" << endl;
     }
     
     else
     {
     currPtr = head;
     
     while(currPtr != NULL)
     {
     //if (contains(currPtr->item) == value); // (recursion part)
     if (currPtr->item == value)
     {
     return true;
     }
     else
     {
     currPtr = currPtr->link;
     }
     }
     if (true)
     {
     cout << "Item is found in the list" << endl << endl;
     }
     else
     {
     cout << "Item is not in the list" << endl << endl;
     }
     }
     return false;
     */
    // Helper Definition.
    
    /*
     NodeType<T> *curr;
     
     curr = head;
     
     if (curr == NULL)
     {
     return false;
     }
     if (curr->item == value)
     {
     return true;
     }
     
     return true;
     */
    NodeType<T> *curr;
    
    curr = head;
    
    bool happy = searchRec(curr->link, val);
    
    if (happy == false)
    {
        return false;
    }
    if (happy == true)
    {
        return true;
    }
    
    return happy;
    //return contains(curr->next, value);
}
 

template<class T>
bool LinkedList<T>::isEmpty()
{
    // Check the list for all possible values?
    // Check for one value
    // inefficient
    /*
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
     */
    // Optimal
    return (head == NULL);
}

#endif /* linkedList_hpp */

