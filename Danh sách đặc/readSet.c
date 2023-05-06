void readSet(List *pL)
{
    makenullList(pL);
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&pL->Elements[i]);
        if(!member(pL->Elements[i],*pL))
        {
            insertSet(pL->Elements[i],pL);
        }
    }
}
makenullList(List *pL)
member(ElementType x, List L)
insertSet(ElementType x, List *pL)
