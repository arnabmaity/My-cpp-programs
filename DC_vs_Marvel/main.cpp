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
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli num,i;
        cin>>num;
        for(i=sqrt(num);i>0;i--)
        {
            lli diff = num-(i*i);
            if(diff>0)
            {
                lli  b = sqrt(diff);
                if((b*b)==diff)
                {
                    cout<<i<<" "<<b<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
