#include<iostream>

using namespace std;

int main()
{
    int a,n,m,x;
    cin>>a>>n>>m>>x;
    for(int t=1;;t++)
    {
        int app,ap,ai;
        int bpp,bp,bi;
        int cpp,cp,ci;
        for(int i=1;i<=n;i++)
        {
            app=ap;
            ap=ai;
            bpp=bp;
            bp=bi;
            cpp=cp;
            cp=ci;
            if(i==1)
            {
                ai=a;
                bi=0;
                ci=a;
            }
            else if(i==2)
            {
                ai=t;
                bi=t;
                ci=a;
            }
            else
            {
                ai=ap+app;
                bi=ap;
                ci=cp+ai-bi;
            }
        }
        if(cp==m)
        {
            for(int i=1;i<=x;i++)
            {
                app=ap;
                ap=ai;
                bpp=bp;
                bp=bi;
                cpp=cp;
                cp=ci;
                if(i==1)
                {
                    ai=a;
                    bi=0;
                    ci=a;
                }
                else if(i==2)
                {
                    ai=t;
                    bi=t;
                    ci=a;
                }
                else
                {
                    ai=ap+app;
                    bi=ap;
                    ci=cp+ai-bi;
                }
            }
            cout<<ci;
            return 0;
        }
    }
}