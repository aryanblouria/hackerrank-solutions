#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
	stringstream s (str);
    int c;
    char x;
    
    vector<int> v = {};
    
    while (s >> c)
    {
        v.push_back(c);
        s >> x;
    }    
    
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
