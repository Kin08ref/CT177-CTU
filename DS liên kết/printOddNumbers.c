void printOddNumbers(List L)
{
    Position P=L->Next;
    while(P!=NULL)
    {
        if(P->Element%2!=0)
            printf("%d ",P->Element);
        P=P->Next;
    }
}
