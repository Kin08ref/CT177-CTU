#define MaxLength 100 		//Độ dài tối đa ds
typedef int ElementType; 	//kiểu của phtử
typedef int Position; 		//kiểu vị trí
typedef struct 
{					//mảng chứa các phần tử của danh sách
    ElementType Elements[MaxLength];
    Position Last; 		//giữ độ dài danh sách
}List;
List L;
//!--------------------------------------------------------------------------------------------
typedef struct
{
    char maSo[10];
    char hoTen[50];
    float diemLyThuyet;
    float diemThucHanh1;
    float diemThucHanh2;
} SinhVien;
#define Maxlength 40
typedef struct
{
    SinhVien A[Maxlength];
    int n;
} List;
//!--------------------------------------------------------------------------------------------
void printList(List L) 
{
    for(int i=0; i<L.Last; i++)
	{
        printf("%d ",L.Elements[i]);
	}
}
//!--------------------------------------------------------------------------------------------
void sort(List *L)
{
    Position a = 0;
    int s;
    while (a != L->Last)
    {  
        Position b = a+1;
            while (b != L->Last)
            {
                if(L->Elements[a] > L->Elements[b])
                {
                    s = L->Elements[b];
                    L->Elements[b] = L->Elements[a]; 
                    L->Elements[a] = s;
                }   
                b++;
            } 
        a++;
    }
}
//!--------------------------------------------------------------------------------------------
void deleteList(Position P,List *L)
{
    if ((P<1) || (P>L->Last))
        printf("Vi tri khong hop le \n");
    else 
    {
        Position Q;                                             /*Dời các phtử từ vị trí p+1 đến cuối danh sách ra trước 1 vị trí*/
        for(Q=P-1;Q < L->Last-1;Q++)
            L->Elements[Q]=L->Elements[Q+1];
        L->Last--;
    }
}
//!--------------------------------------------------------------------------------------------
void normalize(List *L)
{
    Position a, b;
    a = 1;
    while (a != L->Last + 1)
    {
        b = a + 1;
        while (b != L->Last + 1)
        {
            if (L->Elements[a - 1] == L->Elements[b - 1])
                {deleteList(b, L);}
            else
                {b++;}
        }
        a++;
    }
}
//!--------------------------------------------------------------------------------------------
int locate(int x, List L)
{
    Position a = 1;
    Position b = 0;
    while ((a != L.Last + 1) && (b == 0))
    {
        if (L.Elements[a - 1] == x)                 // kiểm tra có bằng không
                b = a;                              // bằng thì gán
        else
                a++;                                // tăng lên tiếp tục tiềm
    }
    return b = P;                                   // trả  về kết quả
}
//!--------------------------------------------------------------------------------------------
void insertList(int X, Position P, List *L)
{
    if ((P < 1) || (P > L->Last + 1))
        printf("Vi tri khong hop le");
    else
    {
        Position Q;                                 /*Dời các phtử từ vị trí p đến cuối dsách ra sau 1 vị trí*/
        for (Q = L->Last+1; Q > P; Q--)
            L->Elements[Q] = L->Elements[Q - 1];    // Đưa x vào vị trí p
        L->Elements[P - 1] = X;                     // Tăng độ dài danh sách lên 1
        L->Last++;
    }
}
//!--------------------------------------------------------------------------------------------
void makenullList(List *pL)
{
    pL->Last = 0;
}
//!--------------------------------------------------------------------------------------------
void printOddNumbers(List L)
{
    for (int i = 0; i < L.Last; i++)
    {
        if (L.Elements[i] % 2 != 0)
            printf("%d ", L.Elements[i]);
    }
}
//!--------------------------------------------------------------------------------------------
