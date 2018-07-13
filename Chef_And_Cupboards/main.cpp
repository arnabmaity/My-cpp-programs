#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        lli sum=0,q2=0,q3=0,d=0;
        sum = a+b;
        q2 = -(2*sum);
        q3 = a*b;
        d  = (q2*q2) - (12*q3);
        long double sqrt_val = sqrt(abs(d));
        long double first = -q2 - sqrt_val;
        long double second = first/6;
        lli result = round(second);
        long double third = -q2 + sqrt_val;
        third = third/6;
        lli result2 = round(third);
        lli volume=0;
        if(result>0)
        {
            volume = result*(a-result)*(b-result);
            cout<<result<<" "<<volume<<endl;
        }
        else
        {
            if(result2>0)
            {
                volume = result2*(a-result2)*(b-result2);
                cout<<result2<<" "<<volume<<endl;
            }
            else
            {
                cout<<"0 0"<<endl;
            }
        }

    }
    return 0;
}
