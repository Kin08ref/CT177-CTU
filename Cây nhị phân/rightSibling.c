Tree rightSibling(int x, Tree T)
{
    Tree tmp = T;
    if(T == NULL)
        return NULL;
    while((T->Left!=NULL || T->Right!=NULL) && T->Key!=x)
    {
        if(T->Key < x)
        {
            tmp = NULL;
            T = T->Right;
        }
        if(T->Key > x)
        {
            tmp = T->Right;
            T=T->Left;
        }
    }
    return tmp;
}
