Tree getMin (Tree T){
	if (T->Left == NULL){
		return T;
	}
	else return getMin(T->Left);
}

Tree getNext (int x, Tree T){
	Tree temp=NULL; 
	while (T!=NULL && T->Key!=x){
		if (x < T->Key){
			temp = T;
			T = T->Left;
		}
		else if (x > T->Key)
			T = T->Right;
	}
	if (T==NULL)
		return NULL;
	else {
		if (T->Right==NULL){
			return temp;
		}
		return getMin(T->Right);
	}
	return NULL;
}
