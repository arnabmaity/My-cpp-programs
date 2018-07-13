/* Author : Arnab Maity. */
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ld long double
#define PB push_back
#define vi vector<int>
#define vlli vector<lli>
#define slli set<lli>
#define mlli map<lli,lli>
#define S second
#define F first
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define MAX1 1000000009
#define MAX2 1000000005

int main()
{
    FIO;
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,p,i,j;
        cin>>n>>p;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lli value = 0;
        bool found = false;
        for(i=0;i<n;i++)
        {
            if(p%a[i]==0)
            {
                value = p/a[i];
                for(j=i+1;j<n;j++)
                {
                    if(a[j]==value)
                    {
                        cout<<"Yes\n";
                        found = true;
                        break;
                    }
                }
            }
            if(found)
            {
                break;
            }
        }
        if(!found)
        {
            cout<<"No\n";
        }
    }

    return 0;
}
