#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() 
{
    set<int> s;
    int q = 0, y = 0, x = 0;
    
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>y>>x;
        switch(y)
        {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if (s.find(x) != s.end())
                    cout<<"Yes"<<endl;
                else 
                    cout<<"No"<<endl;
                break;
        }
    }   
    return 0;
}
