int member(ElementType X, List L)
{
    int Found = 0;
    Position P = L;
    while (P->Next != NULL && !Found)
    {
        if (P->Next->Element == X)
            Found = 1;
        else
            P = P->Next;
    }
    return Found;
}
List intersection(List L1, List L2)
{
    List L;
    makenullList(&L);
    Position P = L1;
    while (P->Next != NULL)
    {
        if (member(P->Next->Element, L2))
            append(P->Next->Element, &L);
        P = P->Next;
    }
    return L;
}
void printOddNumbers(List L)
{
    Position P = L;
    while (P->Next != NULL)
    {
        if (P->Next->Element % 2 == 1)
            printf("%d ", P->Next->Element);
        P = P->Next;
    }
}
void addFirst(ElementType X, List *pL)
{
    Position P = (*pL);
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->Element = X;
    t->Next = P->Next;
    P->Next = t;
    (*pL) = P;
}
void erase(ElementType X, List *pL)
{
    Position P = locate(X, *pL);
    if (P->Next != NULL)
        deleteList(P, pL);
    else
        printf("Not found %d\n", X);
}
void removeAll(ElementType X, List *pL)
{
    Position P = locate(X, *pL);
    while (P->Next != NULL)
    {
        deleteList(P, pL);
        P = locate(X, *pL);
    }
}
List unionSet(List L1, List L2)
{
    List L;
    makenullList(&L);
    Position P = L1;
    while (P->Next != NULL)
    {
        append(P->Next->Element, &L);
        P = P->Next;
    }
    P = L2;
    while (P->Next != NULL)
    {
        if (!member(P->Next->Element, L))
            append(P->Next->Element, &L);
        P = P->Next;
    }
    return L;
}
