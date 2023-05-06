void normalize(List *L)
{
    Position A,B;
    A=*L;
    while (A->Next!=NULL)
    {
        B=A->Next;
        while(B->Next!=NULL)
        {
            if(A->Next->Element == B->Next->Element)
                deleteList(B,L);
            else
                B=B->Next;
        }
        A=A->Next;
    }
}
