#include "stdio.h"
#include "math.h"
#include "AListLib.c"

int member(int x, List L)
{
    for(int i=0; i<L.Last; i++)
    {
        if(L.Elements[i]==x)
            return 1;
    }
    return 0;
}
void readList(List *L)
{
    makenullList(L);
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&L->Elements[i]);
        if(!member(L->Elements[i],*L))
            insertList(L->Elements[i],L->Last+1,L);
    }
}
void Even(List L1, List L2)
{
    int count=0;
    for(int i=0; i<L1.Last;i++)
    {
        count=0;
        for(int z=0; z<L2.Last; z++)
        {
            if(L1.Elements[i]==L2.Elements[z])
                count++;
        }
        if(count ==0)
            printf("%d ",L1.Elements[i]);
    }
}
void printList(List L)
{
    for (int i=0; i<L.Last; i++)
    {
        printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
int main()
{
    List L1,L2,L;
    makenullList(&L);
    readList(&L1);
    printList(L1);
    readList(&L2);
    printList(L2);
    Even(L1,L2);
    
}
