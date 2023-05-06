void printPath(int x, struct Node* node){

    if (node->Key == x)
    {
        if (node != NULL)
        return printf("%d -> Tim thay", node->Key);
    }
    if(node->Left == NULL && node -> Right == NULL)
    {
        if (node != NULL) 
        return printf("%d -> Khong thay", node->Key);
    }
    printf("%d ", node->Key);
    if (x < node->Key)
        printPath(x, node->Left);
    else
        printPath(x, node->Right);
}
