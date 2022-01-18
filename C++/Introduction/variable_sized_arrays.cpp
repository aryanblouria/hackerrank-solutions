#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n = 0, q = 0, k = 0, x = 0, a = 0, b = 0;
    vector<vector<int>> v = {};
    
    cin>>n>>q;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        vector<int> w = {};
        for (int i = 0; i < k; i++)
        {
            cin>>x;
            w.push_back(x);
        } 
        v.push_back(w);   
    }
    
    for (int i = 0; i < q; i++)
    {
        cin>>a>>b;
        cout<<v[a][b]<<endl;
    }
    return 0;
}
