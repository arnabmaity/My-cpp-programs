#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
int main()
{
    lli n,m,t;
    cin>>n>>m>>t;
    string arr[n+1][m+1];
    lli i,j;
    string s;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            arr[i][j] = "0";
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            arr[i][j] = "JonSnow";
        }
    }
    lli row,l,r,k;
    string str;
    while(t--)
    {
        cin>>row>>l>>r;
        cin>>str;
        for(i=l;i<=r;i++)
        {
            arr[row][i] = str;
        }
    }
    set<string> myset;
    string sname;
    lli max=0,val=0,ssize=0;
    map<lli,lli> mymap;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=m;j++)
       {
           myset.insert(arr[j][i]);
       }
       ssize = myset.size();
       val = mymap[ssize];
       mymap[ssize] = ++val;
       if(myset.size()>=max)
        max = myset.size();
       myset.clear();
    }
    cout<<mymap[max]<<" "<<max<<endl;
    return 0;
}
