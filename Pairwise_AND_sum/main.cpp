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
    lli n;
    cin>>n;
    lli a[n];
    memset(a,0,sizeof(a));
    lli i,j,sum=0,ones=0,flag=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1||a[i]==0)
        {
            if(a[i]==1)
                ones++;
        }
        else
        {
            flag = 1;
        }
    }
    if(flag==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                sum+=(a[i]&a[j]);
            }
        }
        cout<<sum<<endl;
    }
    else
    {
        ones = (ones*(ones-1))/2;
        cout<<ones<<endl;
    }
    return 0;
}
