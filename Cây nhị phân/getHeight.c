int getHeight(Tree T)
{
    if(T==NULL) return -1;
    int sL=getHeight(T->Left);
    int sR=getHeight(T->Right);
    if(sL>=sR)
        sR=sL;
    return sR+1;
}
