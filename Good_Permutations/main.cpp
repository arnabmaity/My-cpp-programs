/* Author : Arnab Maity. */
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define PB push_back
#define vi vector<int>
#define vlli vector<lli>
#define slli set<lli>
#define mlli map<lli,lli>
#define S second
#define F first
#define MOD 1000000007

int main()
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,k,i,j,res=0,cnt=0;
        cin>>n>>k;
        lli a[n+5];
        lli tempa[n+5] = {0};
        lli tem[n+5] = {0};
        vlli v;
        memset(a,0,sizeof(a));
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            tem[i] = a[i];
            tempa[a[i]] = a[i];
        }

        /*for(i=1;i<=n;i++)
        cout<<i<<" = "<<tempa[i]<<endl;*/
        for(i=1;i<=n;i++)
        {
            if(tempa[i]==0)
            {
                v.push_back(i);
            }
        }
        do
        {
            j=0;
            cnt=0;;
            for(i=1;i<=n;i++)
            {
                if(a[i]==0)
                {
                    tem[i] = v[j];
                    j++;
                }
            }
            /*for(i=1;i<=n;i++)
            cout<<i<<" = "<<tem[i]<<endl;*/
            for(i=2;i<=n;i++)
            {
                if(tem[i]>tem[i-1])
                {
                    cnt++;
                    if(cnt>k)
                    {
                        break;
                    }
                }
            }
            if(cnt==k)
            {
                res++;
            }


        }while(next_permutation(v.begin(),v.end()));
        cout<<res<<endl;


    }
    return 0;
}
