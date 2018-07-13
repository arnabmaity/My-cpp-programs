#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,k,x,sum=0,flag=0;
        cin>>n>>k;
        lli arr[n];
        map<lli,lli> m;
        set<lli> s;
        for(lli i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
            s.insert(x);
        }
       set<lli>::iterator it;
       for(it=s.begin();it!=s.end();it++)
       {

           if(m[*it]==k)
           {
               sum+=(*it);
               flag = 1;
           }
       }
       if(flag==1)
       {
           cout<<sum<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }

    }
    return 0;
}
