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
    vlli v;
    mlli m;
    m[44] = 1;
    m[120] = 1;
    m[304] = 1;
    m[736] = 1;
    lli testcases,i,maximum=0,num=0;
    lli j = 8;
    for(i=736;i<=1000000009;)
    {
        lli pow_value = pow(2,j);
        num = (i*2) + pow_value;
        if(num>1000000009)
        {
            break;
        }
        i = num;
        j++;
        m[i] = 1;
    }
   /* mlli::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->F<<endl;//Printing all the series values
    }
    cout<<m.size()<<" "<<j;*/
    cin>>testcases;
    for(i=1;i<=testcases;i++)
    {
        cin>>num;
        if(m.find(num)!=m.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
