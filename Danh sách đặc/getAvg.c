float getAvg(List L)
{
    float s=0;
    for (int i=0; i<L.Last; i++)
    {
        s+=L.Elements[i];
    }
    if(L.Last==0)
        return -10000;
    return s/L.Last;
}
