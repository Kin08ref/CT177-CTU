void deleteList(int p, List *pL)
{
    if(p<1||p>pL->Last)
        printf("Vi tri khong hop le \n");
    else 
        {
            for(int i=p-1; i<pL->Last; i++)
            {
                pL->Elements[i]=pL->Elements[i+1];
            }
            pL->Last--;
        }
}
