void addFirst(ElementType x, List *L)
{
    Position P=*L;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    t->Element=x;
    t->Next=P->Next;
    P->Next=t;
}
