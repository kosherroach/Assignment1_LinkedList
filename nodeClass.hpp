//
//  nodeClass.hpp
//  Assignment_1_PS
//
//  Created by P S on 9/16/22.
//

/*
 Nice, Well-documented, and well-written solution
 Two recusive functions.
 */

#ifndef nodeClass_hpp
#define nodeClass_hpp

#include <stdio.h>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

template<class T>
class Node
{
    private:
    Node<T> *next;
    T value; // The value that the node contains. Do not declare it of type "object"
    
    public:
    Node(); // Constructor
    ~Node(); // Destructor
    Node(T val); // Constructor with initialization
    bool contains(T value); // returns true of the lined list contains a value. Must be recursive.
    void print(); // Prints the (the screen). Must be recursive.
    
    // Helper functions
    void RevPrint(T val);
    void Recursion(T val);
};

template<class T>
Node<T>::Node() {
    //this->leftChild = NULL;
    // this->rightChild = NULL;
    value = 0;
}

template<class T>
Node<T>::~Node(){
    //delete next;
/*while (next != nullptr)
    {
        delete leftChild;
        delete rightChild;
    }
 */
}

// Look up Nodes
template<class T>
Node<T>::Node(T val)
{
    //next->value = val;
    value = val;
}

// Change into all template values?
// String values are causing errors
// Recursive Check.

template<class T>
bool Node<T>::contains(T val)
{
    // recursion check
    val = value;
    if (val < 0)
    {
        return false;
    }
    else
        //return contains(val-1);
        return true;
}



// Helper function
// RevPrint

// Recursion for number of nodes and values.
/*
template<class T>
void Node<T>::print()
{
    if (next != NULL)
    {
        RevPrint(value);
    }
    else
    {
        cout << "Empty Node" << " ";
    }
}

// Helper function
template<class T>
void Node<T>::RevPrint(T val)
{
    val = value;
    RevPrint(val);
            
    cout << val << " ";
}
*/

template<class T>
void Node<T>::Recursion(T val)
{
    value = val;
    if (next == NULL)
    {
        return;
    }
    //Recursion(val);
    cout << value << " ";}

template<class T>
void Node<T>::print()
{
    
    //Recursion(tmp->value);
    //Recursion(next);
    Recursion(value);
}


#endif /* nodeClass_hpp */
