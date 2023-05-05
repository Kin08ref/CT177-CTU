int getHeight(Tree T)
{
    if(T==NULL) return -1;
    int sL=getHeight(T->Left)+1;
    int sR=getHeight(T->Right)+1;
    return sL>sR ? sL:sR;
}
int hNode(int x, Tree T)
{
    if(T==NULL) return -1;
    while((T->Left!=NULL || T->Right!=NULL) && T->Key!=x)
    {
        if(T->Key > x)
            T=T->Left;
        if(T->Key < x)
            T=T->Right;
    }
    if(T->Key==x) return getHeight(T);
    return -1;
}

int getHeight(Tree T) 
{
	if(T==NULL)	return -1;
	int h1=getHeight(T->Left)+1;
	int h2=getHeight(T->Right)+1;
	return h1>h2?h1:h2;
}

int hNode(int x, Tree T) 
{
	if(T==NULL) return -1;
	if(T->Key==x) return getHeight(T);
	else if(x<T->Key)
		return hNode(x, T->Left);
	else
		return hNode(x, T->Right);
}
