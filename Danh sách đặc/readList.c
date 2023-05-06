void readList(List *pL)
{
    makenullList(pL);
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&pL->Elements[i]);
        insertList(pL->Elements[i],i+1,pL);
    }   
}
