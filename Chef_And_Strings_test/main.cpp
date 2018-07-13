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
    lli a[n+1][20][26] = {0};
    lli i,j,k;
    for(i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(j=0;j<s.length();j++)
        {
            a[i][j][s[j]-'a'] = 1;
        }
    }
    //cumulative sum calculation starts here
    for(i=2;i<=n;i++)
    {
        for(j=0;j<20;j++)
        {
            for(k=0;k<26;k++)
            {
                a[i][j][k]+=a[i-1][j][k];
            }
        }
    }
    lli q;
    cin>>q;
    while(q--)
    {
        lli l,r,pos;
        char ch;
        cin>>l>>r>>pos>>ch;
        lli result = 0;
        result = a[r][pos-1][ch-'a'] - a[l-1][pos-1][ch-'a'];
        cout<<result<<endl;
    }
    return 0;
}
