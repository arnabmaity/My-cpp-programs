#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
int main()
{
    string frieza = "frieza";
  //  cout<<frieza<<endl;
  //  for(int i=0;i<frieza.length();i++)
     //   cout<<frieza[i];
    lli testcases;
    cin>>testcases;
    while(testcases--)
    {
        lli countt = 0,matched = 0,notmatched = 0,prev_match = 1;
        string s;
        cin>>s;
        for(lli i=0;i<s.length();i++)
        {
           // cout<<s[i]<<endl;
            for(lli j=0;j<frieza.length();j++)
            {

                //cout<<"s[] = "<<s[i]<<endl;
                if(s[i]==frieza[j])
                {
                    //cout<<"matched\n";
                    if(notmatched==1)
                    {
                        notmatched=0;
                        cout<<countt;
                        countt = 0;
                    }
                    matched = 1;
                    countt++;
                    break;

                }

            }
            if(matched==0)
            {
                if(countt>0&&notmatched==0)
                {
                    cout<<countt;
                    countt=0;
                }
               // cout<<"not matched\n";
                notmatched=1;
                countt++;
            }

            matched=0;

        }
        cout<<countt<<endl;


    }
    return 0;
}
