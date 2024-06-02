#include <iostream>
#include "linkedlistBST.h"
using namespace std;

// Main function to test the LinkedBST
int main()
{
    LinkedBST bst;

    cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << endl;

    bst.addBST(2);
    bst.addBST(4);
    bst.addBST(6);
    bst.addBST(8);
    bst.addBST(10);
    bst.addBST(12);
    bst.addBST(14);
    cout << "Is the tree empty? " << (bst.isEmpty() ? "Yes" : "No") << endl;
    bst.display();
    cout << "Searching for 2: " << (bst.searchBST(2) ? "Found" : "Not Found") << endl;
    cout << "Searching for 10: " << (bst.searchBST(10) ? "Found" : "Not Found") << endl;
    cout << "Removing 4: " << (bst.removeBST(4) ? "Success" : "Fail") << endl;
    bst.display();
    cout << "Searching for 4: " << (bst.searchBST(4) ? "Found" : "Not Found") << endl;
    cout << "Removing 10: " << (bst.removeBST(10) ? "Success" : "Fail") << endl;
    bst.display();
    cout << "Searching for 10: " << (bst.searchBST(10) ? "Found" : "Not Found") << endl;
    return 0;
}