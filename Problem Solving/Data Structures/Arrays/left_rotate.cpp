vector<int> rotateOnce(vector<int> arr)
{
    int temp = arr[0];
    for(int i = 0; i < arr.size()-1; i++)
        arr[i] = arr[i+1];
    arr[arr.size()-1] = temp;
    return arr;   
}

vector<int> rotateLeft1(int d, vector<int> arr) {
    for (int i = 0; i < d; i++)
        arr = rotateOnce(arr);
    return arr;
}


vector<int> rotateLeft2(int d, vector<int> arr) {
    vector<int> rotated = {};
    for (int i = d; i < arr.size(); i++)
        rotated.push_back(arr[i]);
    for (int i = 0; i < d; i++)
        rotated.push_back(arr[i]);
    return rotated;
}
