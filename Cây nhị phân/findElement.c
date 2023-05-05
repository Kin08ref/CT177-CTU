Tree findElement(DataType x, Tree T)
{
    if(T==NULL)
        return NULL;
    if(T->Data==x)
        return T;
    else
    {
        if(findElement(x,T->Left) != NULL)
            return findElement(x,T->Left);
        else
            return findElement(x,T->Right);
    }
}
