KeyType Min (Tree *T)
{
	KeyType k;
	if ((*T)->Left == NULL )
	{
		k = (*T)->Key;
		(*T) = (*T)->Right;
		return k;
	}
	else 
	    return Min(&(*T)->Left);
}
void deleteNode (int x, Tree *T)
{
	if ((*T) != NULL){
		if (x < (*T)->Key)
			deleteNode(x, &(*T)->Left);
		else if (x > (*T)->Key)
			deleteNode(x, &(*T)->Right);			
		else{
			if ((*T)->Left==NULL && (*T)->Right==NULL)
				(*T) = NULL;
			else if ((*T)->Left==NULL)
				(*T) = (*T)->Right;
			else if ((*T)->Right==NULL)
				(*T) = (*T)->Left;
			else 
				(*T)->Key = Min(&(*T)->Right);
		}
	}
	else printf("Loi: Hang rong!");
}
