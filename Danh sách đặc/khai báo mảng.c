#define MaxLength 100 		//Độ dài tối đa ds
typedef int ElementType; 	//kiểu của phtử
typedef int Position; 		//kiểu vị trí
typedef struct 
{					//mảng chứa các phần tử của danh sách
    ElementType Elements[MaxLength];
    Position Last; 		//giữ độ dài danh sách
}List;
