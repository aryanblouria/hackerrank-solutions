#include<bits/stdc++.h>

using namespace std;

class Box
{
    public:
        long l;
        long b; 
        long h;
        Box()
        {
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int l, int b, int h)
        {
            this->l = l;
            this->b = b;
            this->h = h;
        }
        Box(Box &x)
        {
            this->l = x.l;
            this->b = x.b;
            this->h = x.h;
        }
        int getLength();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
        bool operator<(Box& b);
};

int Box::getLength()
{
    return l;
}

int Box::getBreadth()
{
    return b;
}

int Box::getHeight()
{
    return h;
}

long long Box::CalculateVolume()
{
    return l*b*h;
}

bool Box::operator<(Box &b)
{
    if (this->l < b.l)
        return true;
    else if (this->l == b.l)
    {
        if (this->b < b.b)
            return true;
        else if (this->b == b.b)
        {
            if (this->h < b.h)
                return true;
        }
    } 
    return false;
}

ostream& operator<<(ostream& out, Box& B)
{
    out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
