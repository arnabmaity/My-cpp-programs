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
    while(testcases--)
    {
        lli n;
        cin>>n;
        if(n==1)
        {
            cout<<"NO\n";
        }
        if(n>1)
        {
            lli i;
            long double a1,b1,c1,a2,b2,c2;
            for(i=1;i<=n+1;i++)
            {
                if(i==1)
                {
                    cin>>a1>>b1>>c1;//  a1*x + b1*y + c = 0 is the equation of the first straight line
                }
                else
                {
                    cin>>a2>>b2>>c2;//  at last a2*x + b2*y + c = 0 is the equation of the last straight line
                }
            }
            long double x,y,x1,y1;
            cin>>x>>y;
            x1 = ((c1*b2)-(b1*c2))/((a2*b1)-(a1*b2));//Finding the intersection point from two straight lines, that is, the first and the last straight line.
            y1 = ((c1*a2)-(a1*c2))/((a1*b2)-(b1*a2));//If the found intersection point is equal to the given point(x,y) then it means the straight line intersect at the given starting point,i.e, Flash comes back to the starting point
            if(x1==x&&y1==y)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }

        }
    }
    return 0;
}
