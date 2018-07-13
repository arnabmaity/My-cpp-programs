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
    lli n,q,i,j;
    cin>>n>>q;
    mlli mymap;
    for(i=0;i<n;i++)
    {
        mymap[i] = 0;
    }
    while(q--)
    {
        lli imp,a,b;
        cin>>imp>>a>>b;
        if(imp==0)
        {
            lli val =0;
            for(i=a;i<=b;i++)
            {
                val = mymap[i];
                val = val^1;
                mymap[i] = val;
            }
        }
        if(imp==1)
        {
            lli cnt =0;
            for(i=a;i<=b;i++)
            {
                if(mymap[i]==1)
                {
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
