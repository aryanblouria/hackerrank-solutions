#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() 
{
    map<string, int> marks;
    int q = 0, t = 0, y = 0;
    string x = "";
    
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>t;
        if (t == 1)
            cin>>x>>y;
        else
            cin>>x;
        
        switch(t)
        {
            case 1:
                marks[x] += y;
                break;
            case 2:
                marks.erase(x);
                break;
            case 3:
                cout<<((marks[x] != 0) ? (marks[x]) : 0)<<endl;
                break;
        }
         
    } 
    return 0;
}
