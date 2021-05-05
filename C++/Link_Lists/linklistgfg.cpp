#include <bits/stdc++.h> 
using namespace std ; 

//Creating the data structure for Linked List 
class Node { 
    public: 
    int data ; 
    Node* next ; 
} ; 

//Link List with three nodes 

int main() 
{ 
    //Head of the linked list 
    Node* head = NULL ; 

    //Create memory space for it 
    head = new Node() ; 

    //head is basically just a pointer to the class Node 

    head->data = 1 ; 

    //Second Block 
    Node* second = NULL ; 
    second = new Node() ; 

    //Attachind the address part of the first block 
    head->next = second ; 
    //Data in second node 
    second->data = 2 ; 

    //Third Block 
    Node* third = NULL ; 
    third = new Node() ; 

    second->next = third ; 

    third->data = 3 ; 
    third->next = NULL ; //As it is the end of the linked list 


}