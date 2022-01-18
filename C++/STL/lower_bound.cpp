#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n = 0, z = 0, q = 0;
    vector<int> v;
    vector<int>::iterator low;
    
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>z;
        v.push_back(z);
    }  
    
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>z;
        low = lower_bound(v.begin(), v.end(), z);
        if (v[low - v.begin()] == z)
            cout<<"Yes "<<low + 1 - v.begin()<<endl;
        else
            cout<<"No "<<low + 1 - v.begin()<<endl;     
    }
    return 0;
}
