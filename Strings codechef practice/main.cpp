#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int lli;
int main()
{
    string s;
    cin>>s;
    lli length = s.length();
    if(length==2)
        cout<<10<<" "<<0<<endl;
    else
    {//cout<<1;
    //for(lli i=1;i<=(length);i++)
      //  cout<<0;
   // cout<<" ";
    lli count=0;
    for(lli i=0;i<length;i++)
    {
        if(s[i]=='0')
            break;
        count++;
    }
    //cout<<count;
    if(count==1)
        cout<<s<<" "<<0<<endl;
    else
    {
        cout<<1;
    for(lli i=1;i<=(length);i++)
        cout<<0;
    cout<<" ";
        cout<<1;
        for(lli i=1;i<=(length-count);i++)
            cout<<0;
            cout<<endl;
    }
    }
    return 0;
}
