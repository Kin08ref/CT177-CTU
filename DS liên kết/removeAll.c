void removeAll(ElementType x, List *L)
{
    while(locate(x,*L)->Next!=NULL)
    {
        deleteList(locate(x,*L),L);
    }
}
