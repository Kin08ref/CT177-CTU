#include <stdio.h>
#include <math.h>
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
void Insert_List1(ElementType x, Position p, List *pL)
{
    for(int i=pL->Last;i>=p;i--)
    {
        pL->Elements[i]=pL->Elements[i-1];
    }
    pL->Last++;
    pL->Elements[p-1]=x;
}

List readList(){
	List L;
	L.Last=0;
	int n;
	ElementType x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(!member(x,L)){	
			insertList(x,endList(L),&L);
		}
	}
	return L;
}

void printList(List L){
	for(int i=0;i<L.Last;i++){
		printf("%d ",L.Elements[i]);
	}
	printf("\n");
}

List Even(List L)
{
    List L1;
    makenullList(&L1);
    Position p=1;
    while(p != L.Last+1)
    {
        if(L.Elements[p-1]%2 ==0)
        {
            insertList(L.Elements[p-1],endList(L1),&L1);
        }
        p++;
    }
    return L1;
}

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

int main(){
	List L1, L;
	L1 = readList();
	L = Even(L1);
	printList(L1);
	printList(L);
	float x = getAvg(L);
	printf("%.3f ",x);
}
