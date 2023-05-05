int getHeight(Tree T) {
    if (T == NULL) return 0;
    return max(getHeight(T->Left), getHeight(T->Right)) + 1;
}

void getDiameterHelper(Tree T, int* maxDiameter) {
    if (T == NULL) return;

    int diameter = getHeight(T->Left) + getHeight(T->Right) + 1;
    if (diameter > *maxDiameter) {
        *maxDiameter = diameter;
    }

    getDiameterHelper(T->Left, maxDiameter);
    getDiameterHelper(T->Right, maxDiameter);
}

void getDiameter(Tree T, int* diameter) {
    *diameter = 0;
    getDiameterHelper(T, diameter);
}
---------------------------------------------
tính chiều cao cây +1
