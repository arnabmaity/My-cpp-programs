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
    lli n,i,val=0;
    cin>>n;
    set<lli> myset;
    for(i=0;i<n;i++)
    {
      cin>>val;
      myset.insert(val);
    }
    cout<<myset.size()<<endl;
    return 0;
}
