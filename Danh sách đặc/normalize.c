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
