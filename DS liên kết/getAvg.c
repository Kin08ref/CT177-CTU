float getAvg(List L)
{
    float s;
    int i=0;
    if(L->Next==NULL)
        return  -10000;
    while(L->Next!=NULL)
    {
        s+= L->Next->Element;
        i++;
        L=L->Next;
    }
    return s/i;
}
