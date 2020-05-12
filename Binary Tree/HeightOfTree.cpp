// number of nodes in the longest path from tree root to leaf.

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left,*right;
    
    Node(int key)   {
        this->key = key;
        this->left = this->right = nullptr;
    }
};

int height(Node *root)  {
    if(root==nullptr)
        return 0;
    return 1+max(height(root->left),height(root->right));
}

int main()  {
    
    return 0;
}