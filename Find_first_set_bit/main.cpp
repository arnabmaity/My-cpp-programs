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
        lli n,cnt = 0;
        cin>>n;
        bool found = false;
        if(n==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            while(n)
            {
                cnt++;
                if(n&1)
                {
                    cout<<cnt<<"\n";
                    found = true;
                    break;
                }
                n = n/2;
            }
            if(!found)
            {
                cout<<0<<"\n";
            }
        }

    }
    return 0;
}
