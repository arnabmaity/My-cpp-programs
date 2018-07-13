#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> customer;
    customer[1] = "Arnab";
    customer.insert(pair<int,string>(2,"Suman"));
    map<int,string>::iterator it;
    it = customer.begin();
    while(it!=customer.end())
    {
        cout<<(it)->second<<endl;
        it++;
    }
    cout<<endl;
    it = customer.begin();
    while(it!=customer.end())
    {
        cout<<(*it).second<<endl;
        it++;
    }
    return 0;
}
