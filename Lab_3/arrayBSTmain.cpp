#include<iostream>
#include"arrayBST.h"
// Main function to test the ArrayBinarySearchTree
int main() {
    ArrayBinarySearchTree bst;
    
    std::cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << std::endl;

    bst.addBST(2);
    bst.addBST(4);
    bst.addBST(6);
    bst.addBST(8);
    bst.addBST(10);
    bst.printTree();
    std::cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << std::endl;

    std::cout << "Searching for 2: " << (bst.searchBST(2) ? "Found" : "Not Found") << std::endl;
    std::cout << "Searching for 7: " << (bst.searchBST(7) ? "Found" : "Not Found") << std::endl;
    std::cout << "Searching for 4: " << (bst.searchBST(4) ? "Found" : "Not Found") << std::endl;
    bst.removeBST(4);  
    bst.removeBST(8);  
    std::cout << "Searching for 4: " << (bst.searchBST(4) ? "Found" : "Not Found") << std::endl;
    bst.printTree();
    return 0;
}