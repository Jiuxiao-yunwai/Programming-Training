#include<iostream>

using namespace std;

int main()
{
    for(int i=50;i<=1000;i++)
    {
        int a=i%7;
        int b=i/7%7;
        int c=i/7/7%7;
        int d=i%9;
        int e=i/9%9;
        int f=i/9/9%9;
        if(a==f && b==e && c==d)
        {
            cout<<i<<endl;
            cout<<c<<b<<a<<endl;
            cout<<f<<e<<d<<endl;
        }
    }
}