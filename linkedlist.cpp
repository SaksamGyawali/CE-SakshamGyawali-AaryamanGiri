#include <iostream>
#include <BSt.h>

class Node{
   public:

   int key;
   Node* left;
   Node* right;
   Node* pred;
   Node(int data):key(data), left(nullptr),right(nullptr)  {}      
};

Node *Root;

class LinkedBST: public BST {

  public:
  
  bool isEmpty(){
   if (Root->key==0)
    return true;
  }

  void addBST(int key){
   
  }
   
};