#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string a, b;
    cin>>a>>b;
    
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a + b<<endl;
    cout<<b[0]+a.substr(1, a.length())<<" "<<a[0]+b.substr(1, b.length())<<endl;
    return 0;
}
