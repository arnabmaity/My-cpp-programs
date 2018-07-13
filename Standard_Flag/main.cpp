#include<stdio.h>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int lli;
int main()
{
    lli n,m;
    cin>>n>>m;
    int a[n][m];
    lli i,j,val=100;
    string s,stest;
    int num;
    for(i=0;i<n;i++)
    {
        val = 100;
        cin>>s;
        lli k=0;
        for(j=0;j<m;j++)
        {
            //stest = s[k];
            //lli men = strtoll(stest,NULL,10);
            a[i][j] = s[k] - '0';
           //a[i][j] = strtoll(stest);
            k++;
            //cout<<a[i][j]<<endl;
            //cin>>a[i][j];
            if(j==0)
            {
                val = a[i][j];
            }
            else
            {
                if(a[i][j]!=val)
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    map<lli,lli> mymap;
    lli cnt = 0;
    for(i=0;i<n;i++)
    {
        cnt = mymap[a[i][0]];
        mymap[a[i][0]] = ++cnt;
        if((mymap[a[i][0]])>1)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
