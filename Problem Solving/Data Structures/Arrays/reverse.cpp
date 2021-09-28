void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> reverseArray1(vector<int> a) {
    for (int i = 0, j = a.size()-1; i < j; i++, j--)
        swap(&a[i], &a[j]);
    return a;
}

vector<int> reverseArray2(vector<int> a) {
    vector<int> b = {};
    for (int i = a.size()-1; i >= 0; i--)
        b.push_back(a[i]);
    return b;
}

