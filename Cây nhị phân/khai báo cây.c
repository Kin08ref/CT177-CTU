khai báo cây
#typedef char DataType;
struct Node {
    DataType     Data;
    struct Node *Left,*Right;
 };
#typedef struct Node* Tree;
