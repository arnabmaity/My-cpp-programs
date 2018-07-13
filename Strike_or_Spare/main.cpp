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
        lli i,j,len,flag=0,p,q=1;
        lli a[100005]={0};
        len = s.length();
        for(i=1;i<=len;i++)
        {
            a[i] = s[i-1]-'0';
        }
        lli mid = len/2;
        i = 1;
        j = len;
        while(mid--)
        {
            if(a[i]==a[j])
            {

            }
            else
            {
                flag = 1;
                break;
            }
            i++;
            j--;
        }
        if(flag==1)
        {
            p = 0;
            cout<<p<<" "<<q<<endl;
        }
        else
        {
            p = 1;
            cout<<p<<" "<<q<<endl;
        }

    }
    return 0;
}
