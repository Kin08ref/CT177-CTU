Tree convertTree(Tree T)
{
    if(T==NULL) return NULL;
    Tree tmp = T->Left;
    T->Left = T->Right;
    T->Right = tmp;
    convertTree(T->Left);
    convertTree(T->Right);
    return T;
}
cây rỗng thì NULL
gán con trái sang phải, gán con phải sang trái
đệ quy trái phải
