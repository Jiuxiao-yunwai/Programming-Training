#include<iostream>
#define LEN 20
#define min(x,y) x<y?x:y
using namespace std;
int n;
bool a[LEN][LEN];
bool flag=false;
void arrcpy(bool dest[LEN][LEN],bool src[LEN][LEN]);
int func(unsigned t);
void change(bool &a);
bool test(bool aa[LEN][LEN]);
void output(bool aa[LEN][LEN]);
int main()
{
    cin>>n;
    string line;
    for(int i=1;i<=n;i++)
    {
        cin>>line;
        for(int j=1;j<=n;j++)
        {
            a[i][j] = line[j-1]=='w'?false:true;
        }
    }
    // output(a);
    int ans=1e9;
    for(unsigned t=0;t<1<<(n);t++)
    {
        // cout<<t<<endl;
        // printf("%x\n",t);
        ans=min(ans,func(t));
    }

    if(flag)
        cout<<ans;
    else
        cout<<"inf";
    return 0;
}
void arrcpy(bool dest[LEN][LEN],bool src[LEN][LEN])
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dest[i][j]=src[i][j];
        }
    }
}
int func(unsigned t)
{
    int cnt=0;
    bool b[LEN][LEN];
    arrcpy(b,a);
    // output(b);

    for(int i=1,j=1;j<=n;j++)
    {
        if(t%2)
        {
            cnt++;
            change(b[i][j]);
            change(b[i-1][j]);
            change(b[i][j-1]);
            change(b[i+1][j]);
            change(b[i][j+1]);
        }
        t/=2;
        // output(b);
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(b[i-1][j]==false)
            {
                cnt++;
                change(b[i][j]);
                change(b[i-1][j]);
                change(b[i][j-1]);
                change(b[i+1][j]);
                change(b[i][j+1]);
            }
        }
    }
    if(test(b))
    {
        flag=true;
        return cnt;
    }
    return 1e9;
}
void change(bool &a)
{
    if(a)
    a=false;
    else
    a=true;
}
bool test(bool aa[LEN][LEN])
{
    // output(a);
    for(int i=n,j=1;j<=n;j++)
    {
        if(aa[i][j]==false)
        return false;
    }
    return true;
}
void output(bool aa[LEN][LEN])
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<aa[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}