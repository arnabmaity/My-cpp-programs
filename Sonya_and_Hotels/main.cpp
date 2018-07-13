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
#define MOD 1000000007
#define MAX1 1000000009
#define MAX2 1000000005

int main()
{
    lli n,d;
    cin>>n>>d;
    lli a[n+5]={0};
    lli i,val=0,val1=0,val2=0;
    slli s;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            cin>>a[i];
            val = a[i]-d;
            s.insert(val);
        }
        else
        {
            cin>>a[i];
            val = a[i-1]+d;
            val1 = val - a[i];
            val1 = abs(val1);
            if(val1>=d)
            {
                s.insert(val);
            }
            val = a[i] - d;
            val2 = val - a[i-1];
            val2 = abs(val2);
            if(val2>=d)
            {
                s.insert(val);
            }
        }
        if(i==n)
        {
            val = a[i] + d;
            s.insert(val);
        }
    }
    /*slli::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }*/
    cout<<s.size()<<endl;
    return 0;
}
