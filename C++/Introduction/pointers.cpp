#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) 
{
    int c = *a;
     *a = *a + *b; 
     *b = abs(c-*b);    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;

    return 0;
}
