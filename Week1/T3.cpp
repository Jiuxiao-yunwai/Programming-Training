#include<iostream>

using namespace std;
int a[650];
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(gcd(a[i],a[j])==1)
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}