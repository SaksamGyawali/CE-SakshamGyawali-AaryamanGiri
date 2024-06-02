#include<iostream>
using namespace std;
#include "bst.h"
#include "linkedlist.cpp"

int main()
{
    LinkedBST bst;

    // Test isEmpty()
    cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << endl;

    // Test addBST()
    bst.addBST(50);
    bst.addBST(30);
    bst.addBST(20);
    bst.addBST(40);
    bst.addBST(70);
    bst.addBST(60);
    bst.addBST(80);

    // Test searchBST()
    cout << "Does 40 exist in the tree? " << (bst.searchBST(40) ? "Yes" : "No") << endl;
    cout << "Does 25 exist in the tree? " << (bst.searchBST(25) ? "Yes" : "No") << endl;

    // Test removeBST()
    cout << "Removing 20" << (bst.removeBST(20) ? ": Success" : ": Failure") << endl;
    cout << "Removing 30" << (bst.removeBST(30) ? ": Success" : ": Failure") << endl;
    cout << "Removing 50" << (bst.removeBST(50) ? ": Success" : ": Failure") << endl;
    cout << "Does 50 exist in the tree after removal? " << (bst.searchBST(50) ? "Yes" : "No") << endl;

    // Test isEmpty() after removals
    cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}