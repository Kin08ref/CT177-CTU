//Có n công vi?c c?n th?c hi?n, các công vi?c du?c dánh s? t? 1 d?n n; Minh Minh du?c dua 2 danh sách:
//Tính s? don v? th?i gian c?n thi?t c?a Minh Minh d? hoàn thành n công vi?c du?c giao.



#include<stdio.h>

#define MaxLength 100
typedef int ElementType;
typedef struct{
	ElementType Elements[MaxLength];
	int Front, Rear;
}Queue;

int fullQueue(Queue Q){
	return ((Q.Rear-Q.Front+1)==MaxLength);
}

void makenullQueue(Queue *pQ){
	pQ->Front=-1;
	pQ->Rear=-1;
} 

int emptyQueue(Queue Q){
	return Q.Front==-1;
}

ElementType front(Queue Q){
	    return Q.Elements[Q.Front];
}


void deQueue(Queue *pQ){
	if (!emptyQueue(*pQ)){
		pQ->Front=pQ->Front+1;
	if (pQ->Front>pQ->Rear)
		makenullQueue(pQ); //Dat lai hang rong
	}
	else printf("Loi: Hang rong!");
}

void insert (ElementType x, Queue *Q){
	if (!fullQueue(*Q)){
		if (emptyQueue(*Q)){
			Q->Front=0;
		}
		if (Q->Rear == MaxLength-1){
			for (int i=Q->Front; i<=Q->Rear; i++){
				Q->Elements[i-Q->Front]=Q->Elements[i];
			}
			Q->Rear = MaxLength-1-Q->Front;
			Q->Front = 0;
		}
		Q->Rear+=1;
		Q->Elements[Q->Rear]=x;
	}
}

void read(int n,Queue *Q){
	ElementType x;
	for (int i=0; i<n; i++){
		scanf("%d", &x);
		insert(x, Q);
	}
}

int main(){
	Queue Q1, Q2;
	makenullQueue(&Q1);
	makenullQueue(&Q2);
	int n, k=0;
	scanf("%d",&n);
	read(n,&Q1);
	read(n,&Q2);
	while (!emptyQueue(Q1)){
				k+=1;
			if (front(Q1)!=front(Q2)){
				insert(front(Q1),&Q1);
				deQueue(&Q1);
			}
			else {
				deQueue(&Q1);
				deQueue(&Q2);
			}
		}
	printf("%d ",k);
}

