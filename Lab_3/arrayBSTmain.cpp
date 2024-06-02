#include<iostream>
#include"arrayBST.h"
// Main function to test the ArrayBinarySearchTree
int main() {
    ArrayBinarySearchTree bst;
    
    std::cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << std::endl;

    bst.addBST(2);
    bst.addBST(4);
    bst.addBST(6);

    std::cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << std::endl;

    std::cout << "Searching for 2: " << (bst.searchBST(2) ? "Found" : "Not Found") << std::endl;
    std::cout << "Searching for 8: " << (bst.searchBST(8) ? "Found" : "Not Found") << std::endl;

    bst.removeBST(6);  // Remove not implemented

    return 0;
}