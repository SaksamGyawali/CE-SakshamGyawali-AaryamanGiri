#include "bst.h"
struct Node{
    int data;
};

class arrayBST{
    Node *data_user;
    int nodeCount{};
    bool resize();
    bool isFull();
        public:
        arrayBST(){
            data_user = new Node[1];
        }
        ~arrayBST(){
            delete []data_user;
        }
            bool isEmpty() const;
            void addBST(int data);
            bool removeBST(int data);
            bool searchBST(int targetKey) const;
};

bool arrayBST::isEmpty() const{
    
}

void arrayBST::addBST(int data){

}

bool arrayBST::removeBST(int data){

}

bool arrayBST::searchBST(int targetKey) const{

}