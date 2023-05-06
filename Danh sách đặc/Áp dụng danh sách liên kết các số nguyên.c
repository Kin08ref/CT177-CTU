#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int ElementType;
struct Node
{
	ElementType Element;
	struct Node* Next;
};
typedef struct Node* Position;
typedef Position List;

void makenullList(List *pL){
    (*pL)=(struct Node*)malloc(sizeof(struct Node));
    (*pL)->Next=NULL;
}
void append(ElementType X, List *pL){
    Position P=(*pL);
    while (P->Next!=NULL)
        P=P->Next;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
	t->Element=X;
	t->Next=P->Next;
	P->Next=t;    
}
void readList(List *pL){
    int n;
    ElementType X;
    scanf("%d", &n);
    makenullList(pL);
    for(int i=1; i<=n; i++){
        scanf("%d", &X);
        append(X,pL);
    }
}
void printList(List L){
	Position P=L;
	while (P->Next!=NULL){
		printf("%d ",P->Next->Element);
		P=P->Next;
	}
	printf("\n");
}
float getAvg(List L){
    Position P=L;
    if (P->Next==NULL)
        return -10000.000;
    else {
        float S=0;
        int count=0;
        while (P->Next!=NULL){
            S += P->Next->Element;
            P=P->Next;
            count++;
        }
        return S/count;
    }
}
int main(){
	List L;
	readList(&L);
	printList(L);
	printf("%.3f", getAvg(L));
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int ElementType;
struct Node
{
	ElementType Element;
	struct Node* Next;
};
typedef struct Node* Position;
typedef Position List;

void makenullList(List *pL){
    (*pL)=(struct Node*)malloc(sizeof(struct Node));
    (*pL)->Next=NULL;
}
void append(ElementType X, List *pL){
    Position P=(*pL);
    while (P->Next!=NULL)
        P=P->Next;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
	t->Element=X;
	t->Next=P->Next;
	P->Next=t;    
}
void readList(List *pL){
    int n;
    ElementType X;
    scanf("%d", &n);
    makenullList(pL);
    for(int i=1; i<=n; i++){
        scanf("%d", &X);
        append(X,pL);
    }
}
void printList(List L){
	Position P=L;
	while (P->Next!=NULL){
		printf("%d ",P->Next->Element);
		P=P->Next;
	}
	printf("\n");
}
int main(){
	List L;
	readList(&L);
	printList(L);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int ElementType;
struct Node
{
	ElementType Element;
	struct Node* Next;
};
typedef struct Node* Position;
typedef Position List;

void makenullList(List *pL){
    (*pL)=(struct Node*)malloc(sizeof(struct Node));
    (*pL)->Next=NULL;
}
void append(ElementType X, List *pL){
    Position P=(*pL);
    while (P->Next!=NULL)
        P=P->Next;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
	t->Element=X;
	t->Next=P->Next;
	P->Next=t;    
}
int member(ElementType X, List L){
    int Found=0;
    Position P=L;
    while (P->Next!=NULL && !Found){
        if (P->Next->Element==X)
            Found=1;
        else
            P=P->Next;
    }
    return Found;
}
void addFirst(ElementType X, List *pL){
    Position P=(*pL);
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
	t->Element=X;
	t->Next=P->Next;
	P->Next=t;
	(*pL)=P;
}
List readSet(){
    List L;
    int n;
    ElementType X;
    makenullList(&L);
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&X);
        if (!member(X,L))
            addFirst(X,&L);
    }
    return L;
}
void printList(List L){
	Position P=L;
	while (P->Next!=NULL){
		printf("%d ",P->Next->Element);
		P=P->Next;
	}
	printf("\n");
}
List intersection(List L1, List L2){
    List L;
    makenullList(&L);
    Position P=L1;
    while (P->Next!=NULL){
        if (member(P->Next->Element,L2))
            append(P->Next->Element,&L);
        P=P->Next;
    }
    return L;
}
int main(){
	List L1, L2, L;
	L1=readSet();
	L2=readSet();
	printList(L1);
	printList(L2);
	L=intersection(L1,L2);
	printList(L);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef int ElementType;
struct Node
{
	ElementType Element;
	struct Node* Next;
};
typedef struct Node* Position;
typedef Position List;

void makenullList(List *pL){
    (*pL)=(struct Node*)malloc(sizeof(struct Node));
    (*pL)->Next=NULL;
}
void append(ElementType X, List *pL){
    Position P=(*pL);
    while (P->Next!=NULL)
        P=P->Next;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
	t->Element=X;
	t->Next=P->Next;
	P->Next=t;    
}
void readList(List *pL){
    int n;
    ElementType X;
    scanf("%d", &n);
    makenullList(pL);
    for(int i=1; i<=n; i++){
        scanf("%d", &X);
        append(X,pL);
    }
}
void printList(List L){
	Position P=L;
	while (P->Next!=NULL){
		printf("%d ",P->Next->Element);
		P=P->Next;
	}
	printf("\n");
}
void deleteList(Position p, List *pL)
{
	if (p->Next!=NULL)		
	{
		Position t=p->Next;
		p->Next = t->Next;
		free(t);
	}
}

Position locate(ElementType x, List L)
{
	int Found=0;
	Position p=L;
	while(p->Next!=NULL && !Found)
		if (x==p->Next->Element) Found=1;
		else p=p->Next;
		
	return p;		
}
void removeAll(ElementType X, List *pL){
    Position P=locate(X,*pL);
    while (P->Next!=NULL){
        deleteList(P, pL);
        P=locate(X,*pL);
    }
}
int main(){
	List L;
	ElementType X;
	readList(&L);
	printList(L);
	scanf("%d",&X);
	removeAll(X,&L);
	printList(L);
	return 0;	
}
