List readSet()
{
    List L;
    makenullList(&L);
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        scanf("%d",&x);
        if(!member(x,L))
            addFirst(x,&L);
    }
    return L;
}
