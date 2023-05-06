void copyEvenNumbers(List L1, List *L)
{
    makenullList(L);
    Position A=L1->Next;
    while(A!=NULL)
    {
        if(A->Element%2==0)
            append(A->Element,L);
        A=A->Next;
    }
}
