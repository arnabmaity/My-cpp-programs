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

int main()
{
    FIO;
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli i,value = 0,flag = 0;;
        string s;
        cin>>s;
        lli len = s.length();
        map<char,lli> mymap;
        map<char,lli> mymap1;
        if(len%2==0)
        {
            for(i=0;i<(len/2);i++)
            {
                value = mymap[s[i]];
                mymap[s[i]] = value+1;
            }
            for(i=len/2;i<len;i++)
            {
                value = mymap1[s[i]];
                mymap1[s[i]] = value+1;
            }
        }
        else
        {
            for(i=0;i<(len/2);i++)
            {
                value = mymap[s[i]];
                mymap[s[i]] = value+1;
            }
            for(i=(len/2)+1;i<len;i++)
            {
                value = mymap1[s[i]];
                mymap1[s[i]] = value+1;
            }

        }
        for(char ch = 'a';ch<='z';ch++)
        {
            if(mymap[ch]==mymap1[ch])
            {

            }
            else
            {
               flag = 1;
               break;
            }
        }
        if(flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
    return 0;
}
