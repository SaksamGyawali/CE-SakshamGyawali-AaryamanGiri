#include <iostream>
#include <BSt.h>

class Node{
   public:

   int key;
   Node* left;
   Node* right;
   Node(int data):key(data), left(nullptr),right(nullptr)  {}      
};

class LinkedBST: public BST {
   
   
};