void sort(List *pL)
{   
    int s;
    for(int i=0; i<pL->Last; i++)
    {
        for(int z=i+1;z<pL->Last;z++)
        {
            if(pL->Elements[i]>pL->Elements[z])
                {
                s = pL->Elements[z];
                pL->Elements[z]=pL->Elements[i];
                pL->Elements[i]=s;
                }
        }
    }
}
