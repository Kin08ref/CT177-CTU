int height(struct Node* root)
{
    if(root == NULL) return -1;
    else
    {   return max(height(root->Left),height(root->Right))+1;}
}
