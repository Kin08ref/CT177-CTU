void unionSet(List L1, List L2, List *L)
{
    makenullList(L);
    for(int i=0; i<L1.Last; i++)
    {
        insertList(L1.Elements[i],L->Last+1,L);
    }
    for(int i=0; i<L2.Last; i++)
    {
            if(!member(L2.Elements[i],L1))
                insertList(L2.Elements[i],L->Last+1,L);
    }
}
void unionSet(List L1, List L2, List *pL)
{
    makenullList(pL);
    for (int i=0; i<L1.Last; i++)
    {
        insertSet(L1.Elements[i],pL);
    }
    for(int i=0; i<L2.Last; i++)
    {
        if(!member(L2.Elements[i],*pL))
            insertSet(L2.Elements[i],pL);
    }
}
