int preIndex =0;
Tree createTree( char pre[], char in[], int start, int end)
{
    Tree N = NULL;
    if(start<=end)
    {
        N = (Tree) malloc(sizeof(struct Node));
        N->Data = pre[preIndex];
        preIndex++;
        if(start==end)
        {
            N->Left = NULL;
            N->Right = NULL;
            return N;
        }
        int inIndex = findIndex(N->Data, in, start, end);
        N->Left = createTree(pre, in, start, inIndex-1);
        N->Right= createTree(pre, in, inIndex+1, end);
    }
    return N;
}

Tree createTree(char pre[], char in[], int Start, int End)
{
    static int preIndex =0;
    if(Start > End)
        return NULL;
    Tree node = (Tree)malloc(sizeof(struct Node));
    node->Data = pre[preIndex++];
    if(Start == End)
    {
        node->Left = NULL;
        node->Right= NULL;
        return node;
    }
    int inIndex = findIndex(node->Data, in, Start, End);
    node->Left = createTree(pre,in,Start,inIndex -1);
    node->Right = createTree(pre,in,inIndex+1,End);
    return node;
}
