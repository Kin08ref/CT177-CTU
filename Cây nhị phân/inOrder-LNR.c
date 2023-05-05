void inOrder(Tree T){
    if(T != NULL)
    {
        inOrder(T->Left);
        printf("%d ", T->Data);
        inOrder(T->Right);
    }
}
