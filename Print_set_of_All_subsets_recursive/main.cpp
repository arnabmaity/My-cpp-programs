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
void print(char a[],lli start,lli last,lli bit_array[])
{
    lli i;
    for(i=start;i<=last;i++)
    {
        if(bit_array[i])
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void Print_set_of_all_subsets(char a[],lli k,lli n,lli bit_array[])
{
    lli i;
    if(k==n)
    {
        bit_array[k] = 0;
        print(a,1,n,bit_array);
        bit_array[k] = 1;
        print(a,1,n,bit_array);
        return;
    }
    bit_array[k] = 0;
    Print_set_of_all_subsets(a,k+1,n,bit_array);
    bit_array[k] = 1;
    Print_set_of_all_subsets(a,k+1,n,bit_array);

}
int main()
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,i;
        cin>>n;
        char arr[n+5];
        lli bit_array[n+5] = {0};
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        Print_set_of_all_subsets(arr,1,n,bit_array);
    }
    return 0;
}
