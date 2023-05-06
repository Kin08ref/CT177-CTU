void posOrder(Tree T)
{
    if(T!=NULL)
    {
        posOrder(T->Left);
        posOrder(T->Right);
        printf("%d ",T->Key);
    }
}
