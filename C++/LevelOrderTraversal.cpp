#include<bits/stdc++.h>
using namespace std;

typedef struct node 
{
    struct node* left;
    int data;
    struct node* right;
}TreeNode;

TreeNode* root = NULL;

TreeNode* createTreeNode(int data)
{
    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void BuildTree()
{
    root = createTreeNode(10);
    root->left = createTreeNode(20);
    root->right = createTreeNode(30);
    TreeNode* t1 = root->left;
    TreeNode* t2 = root->right;
    t1->left = createTreeNode(40);
    t1->right = createTreeNode(50);
    t2->left = createTreeNode(60);
    t2->right = createTreeNode(70);
}
void levelOrderTraversal(TreeNode* root)
{
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* currNode = q.front();
        q.pop();
        if(currNode->left) q.push(currNode->left);
        if(currNode->right) q.push(currNode->right);
        cout<<currNode->data<<" ";
    }
}
int main()
{
    BuildTree();
    levelOrderTraversal(root);
}
