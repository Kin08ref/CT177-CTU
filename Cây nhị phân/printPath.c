void printPath(int x, Tree T){
	if(T == NULL)
		printf("-> Khong thay");
	else {
		printf("%d ", T->Key);
		if(T->Key == x)
			printf("-> Tim thay");
		else 
		    if(T->Key > x) 
			printPath(x, T->Left); 
		    else 
			printPath(x, T->Right);
	}
}
