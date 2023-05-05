int isMirrors(Tree T1, Tree T2)
{
    if(T1==NULL && T2==NULL)
        return 1;
    if(T1==NULL || T2==NULL)
        return 0;
    if(T1->Data != T2->Data)
        return 0;
    return isMirrors(T1->Left, T2->Right) && isMirrors(T1->Right, T2->Left);
}
2 thàng NULL thì trả ra 1
1 trong 2 NULL thì ra 0
2 khác nhau thì trả ra 0
trả về đệ quy qua 2 con
