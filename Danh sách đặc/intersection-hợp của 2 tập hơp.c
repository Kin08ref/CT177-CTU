void intersection(List L1, List L2, List *pL)
{
    makenullList(pL);
    for (int i=0; i<L1.Last; i++)
    {
        if(member(L1.Elements[i],L2))
            insertSet(L1.Elements[i],pL);
    }
}
makenullList(List *pL)
member(ElementType x, List L)
insertSet(ElementType x, List *pL)
