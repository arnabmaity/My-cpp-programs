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
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        string s;
        cin>>s;
        lli len = s.length();
        lli a[len+5] = {0};
        lli i,j;
        for(i=1;i<=len;i++)
        {
            a[i] = s[i-1] - 'a';
        }
        lli x=0,y=0;
        for(i=1;i<=len;i++)
        {
            for(j=i+1;j<=len;j++)
            {
                if(a[i]<a[j])
                {
                    y++;
                }
            }
        }
        cout<<x+y<<endl;
    }
    return 0;
}
