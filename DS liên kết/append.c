void append(ElementType x, List *L)
{
    Position P=*L;
    while(P->Next!=NULL)
        P=P->Next;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    t->Element=x;
    t->Next=P->Next;
    P->Next=t;
    
}
