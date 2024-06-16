#include "linkedlist.cpp"
#include <iostream>
using namespace std;

int main() {
    BST* bst = new LinkedBST();
    cout << "Is tree empty " << (bst->isEmpty() ? "Yes" : "No") << endl;

    bst->addBST(22);
    bst->addBST(44);
    bst->addBST(66);
    bst->addBST(80);
    bst->addBST(10);
    bst->addBST(12);

    cout << "Does the tree contain 80 " << (bst->searchBST(80) ? "Yes" : "No") << endl;
    cout << "Does the tree contain 9 " << (bst->searchBST(9) ? "Yes" : "No") << endl;

    bst->removeBST(6);
    cout << "Does the tree contain 66 after removal? " << (bst->searchBST(66) ? "Yes" : "No") << endl;

    delete bst;
    return 0;
}