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
    string s[n+5];
    lli i,j;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    lli q;
    cin>>q;
    while(q--)
    {
        lli l,r,pos,cnt=0;
        char ch;
        cin>>l>>r>>pos>>ch;
        l--;
        r--;
        pos--;
        for(i=l;i<=r;i++)
        {
            if(s[i][pos]==ch)
            {
                cnt++;
                cout<<cnt<<endl;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
