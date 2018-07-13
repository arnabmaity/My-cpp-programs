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

void first_contiguous_subset_sum(lli a[],lli n,lli sum)
{
    lli i,curr_sum = a[1],start=1;
    for(i=2;i<=n+1;i++)
    {
        while(curr_sum>sum&&start<i)
        {
            curr_sum = curr_sum - a[start];
            start++;
        }
        if(curr_sum==sum)
        {
            cout<<start<<" "<<i-1<<"\n";
            return;
        }
        curr_sum+=a[i];
    }
    cout<<-1<<"\n";

}
int main()
{
    FIO;
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,sum,i;
        cin>>n>>sum;
        lli a[n+5];
        memset(a,0,sizeof(a));
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        first_contiguous_subset_sum(a,n,sum);
    }
    return 0;
}
