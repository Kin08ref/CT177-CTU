void removeAll(ElementType X, List *pL)
{
    while(locate(X,*pL)!=pL->Last+1)
    {
        int P=locate(X,*pL);
        deleteList(P, pL);
    }
}
locate không thấy trả ra Last+1
