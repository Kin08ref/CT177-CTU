void preOrder(Tree T)
{
    printf("%d ",T->Key);
    if(T->Left!=NULL)
        preOrder(T->Left);
    if(T->Right!=NULL)
        preOrder(T->Right);
}
void PreOrder(node_t* root){
    if(root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
