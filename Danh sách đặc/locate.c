int locate(int x, List L)
{
    int p=0;
    for(int i=0; i<L.Last; i++)
    {
        if(L.Elements[i]==x)
            return p=i+1;
    }
    return p=L.Last+1;
}
