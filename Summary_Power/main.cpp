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
        lli n,k,len=0,cnt=0,sum=0;
        cin>>n>>k;
        len = n-1;
        string s;
        cin>>s;
        lli i,j,m=0;
        for(i=0;len-i>=k;i++)
        {
            m=i;
            for(j=0;j<k;j++)
            {
                if(s[m]!=s[m+1])
                {
                    cnt++;
                }
                m++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
