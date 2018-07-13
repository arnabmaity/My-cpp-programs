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
    lli cnt = 0;
    while(testcases--)
    {
        vlli v;
        slli s;
        lli i;
        for(i=0;i<3;i++)
        {
            lli n;
            cin>>n;
            v.push_back(n);
            s.insert(n);
        }
        sort(v.begin(),v.end());
        if(v[0]+v[1]>v[2])
        {
            if(s.size()==1)
            {
                cout<<"equilateral"<<endl;
            }
            if(s.size()==2)
            {
                cout<<"isosceles"<<endl;
                cnt++;

            }
            if(s.size()==3)
            {
                cout<<"scalene"<<endl;
            }

        }
        else
        {
            cout<<"not triangle"<<endl;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
