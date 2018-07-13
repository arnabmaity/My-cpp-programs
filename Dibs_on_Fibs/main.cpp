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
lli fibo[100007];
void fibonacci()
{
    fibo[1] = 0;
    fibo[2] = 1;
    lli i;
    for(i=3;i<=100006;i++)
    {
        fibo[i] = (fibo[i-1] + fibo[i-2])%MOD;
    }
}
int main()
{
    FIO;
    fibonacci();
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli m,n;
        cin>>m>>n;
        lli i;
        lli val=0,suma=0,sumb=0;
        for(i=1;i<=m;i++)
        {
            cin>>val;
            suma = (suma+val)%MOD;
        }
        for(i=1;i<=m;i++)
        {
            cin>>val;
            sumb = (sumb+val)%MOD;
        }
        lli res1=0,res2=0,final_res=0;
        if(n==1)
        {
            res2 = (suma*(m))%MOD;
        }
        else
        {
            res1 = (suma*fibo[n-1])%MOD;
            res2 = (sumb*fibo[n])%MOD;
            final_res = (res1 + res2)%MOD;
            res2 = (final_res * m)%MOD;
        }
        cout<<res2<<"\n";
    }
    return 0;
}
