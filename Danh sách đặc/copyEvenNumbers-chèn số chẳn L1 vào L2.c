void copyEvenNumbers(List L1, List *L2)
{
    makenullList(L2);
    for(int i=0; i<L1.Last; i++)
    {
        if(L1.Elements[i]%2==0)
            insertList(L1.Elements[i],L2->Last+1,L2);
    }
}
