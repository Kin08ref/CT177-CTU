void printPath(int x, struct Node* node){

    if (node->Key == x)
    {
        if (node != NULL) printf("%d -> Tim thay", node->Key); 
        return;
    }
    if(node->Left == NULL && node -> Right == NULL)
    {
        if (node != NULL) printf("%d -> Khong thay", node->Key); 
        return;
    }
    printf("%d ", node->Key);
    if (x < node->Key)
        printPath(x, node->Left);
    else
        printPath(x, node->Right);
}
