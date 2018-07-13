#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli primeFactors(int n)
{
    set<lli> s;
	// Print the number of 2s that divide n
	if(n==1)
        return 0;
	while (n%2 == 0)
	{
		//printf("%d ", 2);
		s.insert(2);
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			//printf("%d ", i);
			s.insert(i);
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
        s.insert(n);
		//printf ("%d ", n);
		return s.size();
}
int main()
{
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli n,m,m1,factors = 0,result = 0;
        cin>>n>>m;
        m1 = m-1;
        for(lli i=n;i<=m1;i++)
        {
            factors = primeFactors(i);
            //cout<<"factors = "<<factors<<endl;
            result = result + factors;
        }
        cout<<result<<endl;
    }
    return 0;
}
