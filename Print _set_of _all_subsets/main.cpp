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
void Print_set_of_all_subsets(lli a[],lli n)
{
    lli i,j,value=0;
    lli power_set_size = pow(2,n);
    for(i=0;i<power_set_size;i++)
    {
        if(i==0)
        {
            cout<<"Null Set"<<endl;
        }
        else
        {
            cout<<"{";
            for(j=0;j<n;j++)
            {
                value = pow(2,j);
                if(i&value)
                {
                    cout<<a[j]<<" ";
                }
            }
            cout<<"}"<<endl;
        }
    }
}
int main()//Iterative process to print all subsets of a set(Powerset)
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,i;
        cin>>n;
        lli arr[n+5];
        for(i=1;i<=n;i++)
        {
            arr[i-1] = i;
        }
        Print_set_of_all_subsets(arr,n);
    }
    return 0;
}
