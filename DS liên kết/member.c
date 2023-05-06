int member(ElementType x, List L)
{
    Position A=L->Next;
    while(A!=NULL)
    {
        if(A->Element==x)
            return 1;
        A=A->Next;
    }
    return 0;
}
