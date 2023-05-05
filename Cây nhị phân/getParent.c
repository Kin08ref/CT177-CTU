Tree getParent (int x, Tree T)
{
	Tree tmp=NULL;
	while(T!=NULL && T->Key!=x) 
	{
		tmp=T;
		if(x<T->Key) 
			T=T->Left;
		else
			T=T->Right;
	}
	return tmp;
}
