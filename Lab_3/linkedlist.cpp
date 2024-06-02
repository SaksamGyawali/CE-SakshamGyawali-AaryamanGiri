#include <iostream>
#include "bst.h"

class Node
{
public:
  int key;
  Node *left;
  Node *right;
  Node *pred;
  Node(int data) : key(data), left(nullptr), right(nullptr) {}
};

Node *Root;

class LinkedBST : public BST
{

private:
  Node *root;

  Node *addBST(Node *node, int key)
  {
    if (node == nullptr)
    {
      return new Node(key);
    }
    if (key < node->key)
    {
      node->left = addBST(node->left, key);
    }
    else if (key > node->key)
    {
      node->right = addBST(node->right, key);
    }
    return node;
  }

  Node *findMin(Node *node)
  {
    while (node->left != nullptr)
    {
      node = node->left;
    }
    return node;
  }

  Node *removeBST(Node *node, int key)
  {
    if (node == nullptr)
      return node;

    if (key < node->key)
    {
      node->left = removeBST(node->left, key);
    }
    else if (key > node->key)
    {
      node->right = removeBST(node->right, key);
    }
    else
    {
      if (node->left == nullptr)
      {
        Node *temp = node->right;
        delete node;
        return temp;
      }
      else if (node->right == nullptr)
      {
        Node *temp = node->left;
        delete node;
        return temp;
      }

      Node *temp = findMin(node->right);
      node->key = temp->key;
      node->right = removeBST(node->right, temp->key);
    }
    return node;
  }

  bool searchBST(Node *node, int targetKey) const
  {
    if (node == nullptr)
      return false;
    if (node->key == targetKey)
      return true;
    if (targetKey < node->key)
      return searchBST(node->left, targetKey);
    return searchBST(node->right, targetKey);
  }

public:
  LinkedBST() : root(nullptr) {}

  bool isEmpty() override
  {
    return root == nullptr;
  }

  void addBST(int key) override
  {
    root = addBST(root, key);
  }

  bool removeBST(int key) override
  {
    if (searchBST(root, key))
    {
      root = removeBST(root, key);
      return true;
    }
    return false;
  }

  bool searchBST(int targetKey) const override
  {
    return searchBST(root, targetKey);
  }
};
