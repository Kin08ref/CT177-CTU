List getList(){
	List L;
	L=(struct Node*)malloc(sizeof(struct Node));
	L->Next=NULL;
	return L;
}
typedef struct 
{
   char ID[10];
   char Name[50];
   float R1, R2, R3;
}Student;

struct Node
{
	Student Element;
	struct Node* Next;	
};

typedef struct Node* List;
int append(Student s, List *pL){
	struct Node *P, *temp;
	P=locate(s.ID,(*pL));
	if (P->Next!=NULL){
		return 0;
	}
	else{
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->Element=s;
		temp->Next=NULL;
		P->Next=temp;
		return 1;
	}	
}
