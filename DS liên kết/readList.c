void append(ElementType x, List *L)
{
    Position A=(*L);
    while(A->Next!=NULL)
        A=A->Next;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    t->Element=x;
    t->Next=A->Next;
    A->Next=t;
}
void readList(List *L)
{
    makenullList(L);
    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&x);
        append(x,L);
    }
}
