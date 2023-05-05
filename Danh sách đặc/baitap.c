#include "stdio.h"
#include "math.h"
#include "AListLib.c"
int member(ElementType x, List L)
{
    for(int i = 0 ; i<L.Last;i++)
    {
        if(L.Elements[i]==x)
        {return 1;}
    }
    return 0;
}
void readList(List *L)
{
    makenullList(L);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&L->Elements[i]);
        insertList(L->Elements[i],L->Last+1,L);
    }
}
void printList(List L){
	for(int i=0;i<L.Last;i++){
		printf("%d ",L.Elements[i]);
	}
	printf("\n");
}

void sole(List L)
{
    for (int i = 0; i < L.Last; i++)
    {
        if (L.Elements[i] % 2 != 0)
            printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void sochan(List L)
{
    for (int i = 0; i < L.Last; i++)
    {
        if (L.Elements[i] % 2 == 0)
            printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
int main()
{
    List L;
    readList(&L);
    printList(L);
    sole(L);
    sochan(L);

}