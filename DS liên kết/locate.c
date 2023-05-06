Position locate(ElementType x,List L)
{
    Position A=L;
    while(A->Next!=NULL)
    {
        if(A->Next->Element==x)
            break;
        else
            A=A->Next;
    }
    return A;
}
