Tree getPrevious(int x, Tree T)
{
    Tree tmp = NULL;
    while(T!=NULL && T->Key !=x)
    {
        if(T->Key > x)
            T=T->Left;
        else
        {
            tmp = T;
            T=T->Right;
        }
    }
    if (T->Left == NULL)
        return tmp;
    else
	{
		T = T->Left;
		return T;
	}
}
