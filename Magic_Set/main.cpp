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
    lli val = 0;
    while(testcases--)
    {
        lli n,m,cnt=0;
        cin>>n>>m;
        val = 0;
        while(n--)
        {
            cin>>val;
            if(val%m==0)
            {
                cnt++;
            }
        }
        lli total_size = cnt;
        lli subsequences = pow(2,total_size);
        subsequences = subsequences - 1;
        cout<<subsequences<<endl;
    }
    return 0;
}
