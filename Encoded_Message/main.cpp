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
    lli testcases,i;
    cin>>testcases;
    while(testcases--)
    {
        lli case_input;
        cin>>case_input;
        if(case_input==1)
        {
            lli a,b,c;
            cin>>a>>b>>c;
            string s;
            cin>>s;
            vlli v;
            for(i=0;i<s.length();i++)
            {
                char ch = s[i];
                lli val = ch;
                lli keys = 0;
                keys = (a*(val)) + (b*(val)) + c;
                keys = keys^(i+1);
                if(i==(s.length()-1))
                {
                    cout<<keys<<endl;
                }
                else
                {
                    cout<<keys<<" ";
                }
            }
        }
        if(case_input==0)
        {
            lli a,b,c,len=0;
            cin>>a>>b>>c>>len;
            for(i=1;i<=len;i++)
            {
                lli dec_value;
                cin>>dec_value;
                dec_value = dec_value^i;
                dec_value = dec_value - c;
                dec_value = (dec_value)/(a+b);
                char ch = dec_value;
                cout<<ch;
            }
            cout<<endl;

        }
    }

    return 0;
}
