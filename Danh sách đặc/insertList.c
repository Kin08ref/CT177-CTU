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
