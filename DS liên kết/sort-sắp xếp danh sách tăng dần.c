void sort(List *L)
{
    Position A=*L;
    while(A->Next!=NULL)
    {
        Position B=A->Next;
        while(B->Next!=NULL)
            {
                if(A->Next->Element>B->Next->Element)
                {
                    ElementType tmp=A->Next->Element;
                    A->Next->Element=B->Next->Element;
                    B->Next->Element=tmp;
                }
                B=B->Next;
            }
        A=A->Next;
    }
}
