#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli sort_chef(string str,lli n)
{
    //lli counter = 0;
    string s = "geek";
    for(lli i=0;i<=3;i++)
    {
        s[i] = str[n];
        n++;
    }
   // cout<<s<<endl;
    sort(s.begin(),s.end());
   if(s=="cefh")
    {
        return 1;
    }
    return 0;

}
int main()
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli counter=0;
        string s;
        cin>>s;
        lli length = s.length();
        //sort(s.begin(), s.end());
        //cout<<s;
        for(lli i=0;i<=(length-4);i++)
        {
            if(s[i]=='c'||s[i]=='h'||s[i]=='e'||s[i]=='f')
            {
                //cout<<"matched at "<<i<<" "<<s[i]<<endl;
                counter = counter + sort_chef(s,i);
            }

        }
        //cout<<counter<<endl;
        if(counter>0)
            cout<<"lovely "<<counter<<endl;
        else
            cout<<"normal"<<endl;
    }
    return 0;
}
