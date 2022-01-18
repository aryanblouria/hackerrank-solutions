#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n = 0, k = 0, x = 0, a = 0, b = 0;
    vector<int> v;
    
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        v.push_back(k);
    } 
    
    cin>>x;
    v.erase(v.begin() + x - 1);
    
    cin>>a>>b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    
    cout<<v.size()<<endl;
    for (auto e: v)
        cout<<e<<" ";
    return 0;
}
