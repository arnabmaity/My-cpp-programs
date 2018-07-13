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
void reverse_array(lli a[],lli start,lli last)
{
    lli temp=0;
    while(start<last)
    {
        temp = a[start];
        a[start] = a[last];
        a[last] = temp;
        start++;
        last--;
    }
}
void print_modified_array(lli a[],lli n)
{
    lli i;
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<a[i]<<"\n";
        }
        else
        {
            cout<<a[i]<<" ";
        }
    }
}
int main()
{
    FIO;
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,k;
        cin>>n;
        lli *a = new lli[n];
        memset(a,0,sizeof(a));
        lli i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        if(k==n)
        {
            print_modified_array(a,n);
        }
        else
        {
            reverse_array(a,0,k-1);
            reverse_array(a,k,n-1);
            reverse_array(a,0,n-1);
            print_modified_array(a,n);
        }
    }
    return 0;
}
