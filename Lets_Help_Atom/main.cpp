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
    lli q;
    cin>>q;
    vector<string> v;
    lli v_pos = 0;
    string s;
    s = "";
    v.push_back(s);
    while(q--)
    {
        lli n;
        cin>>n;
        if(n==1)//append new string
        {
           string new_string ;
           cin>>new_string;
           s = s + new_string;
           v.push_back(s);
           v_pos++;
        }
        if(n==2)//delete last k characters
        {
            lli k;
            cin>>k;
            s = s.substr(0,s.length()-k);
            v.push_back(s);
            v_pos++;
        }
        if(n==3)//print operation
        {
            lli char_pos;
            cin>>char_pos;
            cout<<s[char_pos-1]<<endl;
        }
        if(n==4)//undo operation
        {
            v_pos--;
            s = v[v_pos];
            v.pop_back();
        }
    }
    return 0;
}
