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
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define MAX1 1000000009
#define MAX2 1000000005

int main()
{
    FIO;
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        string s;
        cin>>s;
        if(s[0]==']'||s[0]=='}'||s[0]==')')
            cout<<"not balanced\n";
        else
        {
            lli len = s.length();
            lli i,c1=0,c2=0,c3=0,flag=0;
            stack<char> st;
            char ch;
            for(i=0;i<len;i++)
            {
                if(s[i]=='('||s[i]=='{'||s[i]=='[')
                {
                    st.push(s[i]);
                }
                else
                {
                    ch = s[i];
                    if(ch==')')
                    {
                        c1 = 1;
                    }
                    if(ch=='}')
                    {
                        c2 = 1;
                    }
                    if(ch==']')
                    {
                        c3 = 1;
                    }
                    if(c1==1)
                    {
                        c1 = 0; c2 = 0; c3 = 0;
                        if(!st.empty()&&st.top()=='(')
                        {
                            st.pop();
                            continue;
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(c2==1)
                    {
                        c1 = 0; c2 = 0; c3 = 0;
                        if(!st.empty()&&st.top()=='{')
                        {
                            st.pop();
                            continue;
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if(c3==1)
                    {
                        c1 = 0; c2 = 0; c3 = 0;
                        if(!st.empty()&&st.top()=='[')
                        {
                            st.pop();
                            continue;
                        }
                        else
                        {
                            flag = 1;
                            break;
                        }
                    }

                }
            }
            if(st.empty()==true&&flag==0)
            {
                cout<<"balanced\n";
            }
            else
            {
                cout<<"not balanced\n";
            }
        }
    }
    return 0;
}
