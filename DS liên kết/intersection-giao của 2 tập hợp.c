List intersection(List L1, List L2)
{
    List L;
    makenullList(&L);
    Position A=L1->Next;
    while(A!=NULL)
    {
        if(member(A->Element,L2))
            append(A->Element,&L);
        A=A->Next;
    }    
    return L;
}

member(x,L);
append(x,&L);
