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
void next_palindrome(string s)
{
    lli len = s.length();
    lli i=0,j=0,k=0;
    if(len==1)
    {
        if(s[i]=='9')
        {
            cout<<"11\n";
        }
        else
        {
            lli np = s[i] - '0';
            cout<<np+1<<endl;
        }
    }
    else
    {
        if(len%2==0)//even length case
        {
            lli mid = (len/2)-1;
            lli flag = 0;
            //checking 9 case
            for(i=mid;i>=0;i--)
            {
                if(s[i]=='9')
                {
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                lli nz = 0;
                nz = len-1;
                cout<<"1";
                while(nz--)
                {
                    cout<<"0";
                }
                cout<<"1"<<endl;
            }//ending 9 case
            else
            {

            }
        }
    }
}
int main()
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        string s;
        cin>>s;
        next_palindrome(s);
    }
    return 0;
}
