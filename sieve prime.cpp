#include<bits/stdc++.h>
using namespace std;
int prime[10000];
int mark[10000];
int nprime=0;
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;
    mark[0]=1;
   prime[nprime]=2;
    nprime++;
    for(i=4; i<=n; i=i+2)
    {
        mark[i]=1;
    }
    for(i=3; i<=n; i=i+2)
    {
        if(mark[i]!=1)
        {
            prime[nprime]=i;
            nprime++;
            if(i <= limit)
            {
                for(j=i*i; j<=n; j=j+2*i)
                {
                    mark[j]=1;
                }
            }
        }
    }

}

int  main()
{
    int a,i;
    cin>>a;
    sieve(a);
    for(i=0; i<nprime; i++)
    {
        cout<<prime[i]<<" ";
    }
    return 0;
}

