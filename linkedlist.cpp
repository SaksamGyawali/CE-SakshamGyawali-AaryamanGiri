#include <iostream>
#include <BSt.h>

class Node{
   public:

   int data;
   Node* left;
   Node* right;
   Node(int data):data(data), left(nullptr),right(nullptr)  {}      
};

class LinkedBST: public BST {
   
};