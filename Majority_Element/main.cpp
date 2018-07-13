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
        lli n,i;
        cin>>n;
        lli a[n];
        mlli m;
        slli s;
        lli majority = n/2;
        bool maj = false;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]] = m[a[i]]+1;
            s.insert(a[i]);
        }
        slli::iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            if(m[*it]>majority)
            {
                maj = true;
                cout<<*it<<"\n";
                break;
            }
        }
        if(!maj)
        {
            cout<<"NO Majority Element"<<"\n";
        }
    }
    return 0;
}
