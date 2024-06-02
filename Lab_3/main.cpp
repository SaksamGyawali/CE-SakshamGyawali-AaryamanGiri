#include "linked_bst.h"
#include <iostream>
using namespace std;

int main() {
    InterfaceBST* bst = new LinkedBST();
    cout << "Is the tree empty? " << (bst->isEmpty() ? "Yes" : "No") << endl;

    bst->addBST(2);
    bst->addBST(4);
    bst->addBST(6);
    bst->addBST(8);
    bst->addBST(10);
    bst->addBST(12);

    cout << "Does the tree contain 10? " << (bst->searchBST(10) ? "Yes" : "No") << endl;
    cout << "Does the tree contain 9? " << (bst->searchBST(9) ? "Yes" : "No") << endl;

    bst->removeBST(6);
    cout << "Does the tree contain 6 after removal? " << (bst->searchBST(6) ? "Yes" : "No") << endl;

    delete bst;
    return 0;
}