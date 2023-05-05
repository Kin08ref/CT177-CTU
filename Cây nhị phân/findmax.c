char findMax(Tree T)
{
    char max;
    if(T==NULL) {return 0;}
    else max = T->Data;
    char Ltree = findMax(T->Left);
    char Rtree = findMax(T->Right);
    if (Ltree > max)
        max = Ltree;
    if (Rtree > max)
        max = Rtree;
    return max;
}
