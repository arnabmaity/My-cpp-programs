#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    lli n;
    cin>>n;
    lli num;
    cin>>num;
    lli val = num;
    lli mo = 0,four=0,seven=0;
    while(val)
    {
        mo = val%10;
        val = val/10;
        if(mo==4||mo==7)
        {
            if(mo==4)
            {
                four=1;
            }
            else
            {
                seven = 1;
            }
        }
        else
        {
            cout<<"NO\n";
            return 0;
        }

    }
    if(four==1&&seven==1)
    {
        lli low = n-1;
    lli high = n;
    lli low_check = pow(10,low);
    lli high_check = pow(10,high);
    //cout<<low_check<<" "<<high_check;
    if(num>=low_check&&num<high_check)
    {
        lli mid = n/2;
        lli i,j,sum=0,digit = 0;
        lli n = num;
        while(mid--)
        {
            digit=n%10;
            sum+=digit;
            n= n/10;
        }
        //cout<<sum<<endl;
        lli sum1=0;
        mid = n/2;
        while(mid--)
        {
            digit=n%10;
            sum1+=digit;
            n= n/10;
        }
       // cout<<sum1<<endl;
        if(sum==sum1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    else
    {
        cout<<"NO\n";
    }


    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
