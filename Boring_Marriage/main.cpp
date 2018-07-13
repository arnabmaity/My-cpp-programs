#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll n,length=0,maxlength=0;
    cin>>n;
    string s[n];
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
        length = length + s[i].length();
    }
    string randstring;
    cin>>randstring;
    maxlength = randstring.length();
    if(length>maxlength)
    {
        cout<<-1<<endl;
    }
    return 0;
}
