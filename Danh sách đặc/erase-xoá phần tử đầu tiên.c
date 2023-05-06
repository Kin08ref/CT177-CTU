void erase(int x, List *pL)
{
    deleteList(locate(x,*pL),pL);
}
deleteList(int x, List L)
locate(int, List *pL) không thấy trả về L->Last+1
