int getFullNodes(Tree T) {
    if (T == NULL) 
        return 0;
    if (T->Left != NULL && T->Right != NULL) 
        return 1 + getFullNodes(T->Left) + getFullNodes(T->Right);
     else 
        return getFullNodes(T->Left) + getFullNodes(T->Right);
}

-------------------------------------------------------------
int getFullNodes(Tree T) {
    if (T == NULL) {
        return 0;
    }
    int count = 0;
    if (T->Left != NULL && T->Right != NULL) {
        count++;
    }
    count += getFullNodes(T->Left) + getFullNodes(T->Right);
    return count;
}
