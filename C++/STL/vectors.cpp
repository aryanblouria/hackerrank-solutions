#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n = 0, x = 0;
    vector<int> v;
    
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x); 
    }
    
    sort(v.begin(), v.end());
    for (auto e: v)
        cout<<e<<" ";
             
    return 0;
}
