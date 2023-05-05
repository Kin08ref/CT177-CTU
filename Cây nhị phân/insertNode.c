void insertNode(int x, Tree *T){
	if((*T) == NULL){
		(*T) = (struct Node*)malloc(sizeof(struct Node));
		(*T)->Key = x;
		(*T)->Left = NULL;
		(*T)->Right = NULL;
	}
	else 
	    if (x < (*T)->Key)
			insertNode(x,&((*T)->Left));
	    else if (x > (*T)->Key)
			insertNode(x,&((*T)->Right));
}
