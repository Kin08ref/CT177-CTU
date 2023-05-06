void deleteList(Position p, List *pL)
{
    if (p->Next != NULL)
    {
        Position t = p->Next;
        p->Next = t->Next;
        free(t);
    }
}
