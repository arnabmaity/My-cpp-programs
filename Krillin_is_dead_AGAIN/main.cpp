#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
lli findmedian(lli arr[],lli l,lli r,lli sum,lli index1,lli index2)
{
    lli a[sum+1] = {0};
    lli j=1,num=0,median=0,i=0;
    vector<lli> v;
    v[0] = 0;
    for(i=l;i<=r;i++)
    {
        num = arr[i];
        while(num--)
        {
            //a[j] = i;
            //v[j] = i;
            v.push_back(i);
            j++;
        }
    }
    cout<<v[index1]<<"  "<<v[index2]<<endl;

    if(index2==0)
        median = v[index1];
    else
        median = (v[index1] + v[index2])/2;
    return median;

}
// Recursive function to return gcd of a and b
lli gcd(lli a, lli b)
{
    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

// Function to return LCM of two numbers
lli lcm(lli a, lli b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,q;
        cin>>n>>q;
        lli arr[n+1] = {0};
        for(lli i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        while(q--)
        {
           lli qnum,l,r,ith,x,sum=0,max=0,mode=0,median=0,index1=0,index2=0;
           cin>>qnum;
           if(qnum==1)
           {
               cin>>l>>r;
               for(lli i=l;i<=r;i++)
               {
                   sum+=arr[i];
                   if(arr[i]>max)
                   {
                       max = arr[i];
                       mode = i;
                   }
               }
               if(sum%2==0)
               {
                   index1 = sum/2;
                   index2 = index1+1;
                  // median = findmedian(arr,l,r,sum,index1,index2);
                   //cout<<median<<" mode "<<mode<<endl;;
                   cout<<lcm(mode,median)<<endl;
               }
               else
               {
                   index1 = (sum/2)+1;
                   index2 = 0;
                  // median = findmedian(arr,l,r,sum,index1,index2);
                   //cout<<median<<"mode "<<mode<<endl;
                   cout<<lcm(mode,median)<<endl;
               }
           }
           if(qnum==2)
           {
               cin>>ith>>x;
               arr[ith] = x;
           }
        }

    }
    return 0;
}
