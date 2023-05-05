Tree searchNode (int x, Tree T)
{
	while (T!=NULL && T->Key!=x)
	{
		if (x < T->Key)
			T=T->Left;
		else if (x > T->Key)
			T=T->Right;
	}
	return T;
}
