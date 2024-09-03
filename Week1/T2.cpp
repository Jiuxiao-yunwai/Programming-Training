#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int m=1;;m++)
    {
        long long int ans=m;
        int i=1;
        for(;i<=n;i++)
        {

            if(i==1)
                ans=ans*n+1;
            else
            {
                if(ans%(n-1))
                break;
                ans=ans*n/(n-1)+1;
                if(i==n)
                {
                    cout<<ans;
                    return 0;
                }
            }
        }
    }
}
