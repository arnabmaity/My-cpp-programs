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

mlli mymap;

lli Bytelandian_Gold_Coin(lli n)
{
    /*if(n<=11)//since all numnbers <=11 will return itself
        return n;*/
    if(n==0)
        return n;

    if(mymap[n])
    {
        return mymap[n];
    }


    mymap[n] = max(n,Bytelandian_Gold_Coin(n/2)+Bytelandian_Gold_Coin(n/3)+Bytelandian_Gold_Coin(n/4));
    return mymap[n];
}
int main()
{
    lli n;
    while(cin >> n)
    {
        cout<<Bytelandian_Gold_Coin(n)<<endl;
    }
    return 0;
}
