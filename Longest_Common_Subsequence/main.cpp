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
lli LCS_problem(lli n,lli m,string s1,string s2)
{
    lli c[n+5][m+5];
    memset(c,0,sizeof(c));
    lli i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                c[i][j] = 1 + c[i-1][j-1];
            }
            else
            {
                c[i][j] = max(c[i-1][j],c[i][j-1]);
            }
        }
    }
    return c[n][m];
}
int main()
{
    FIO;
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,m;
        string s1,s2;
        cin>>n>>m>>s1>>s2;
        cout<<LCS_problem(n,m,s1,s2)<<"\n";
    }
    return 0;
}
